#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr = fopen("file.txt","w");

    if(fptr!=NULL){
        printf("File exists.");
    }else {
        printf("file doesnt exists");
    }

    //fputc
    int vcnt=0;
    char istr[20]="helloworld\n";
    for(int i=0;i<20;i++){
        if(istr[i]!=0){
            fputc(istr[i],fptr);
        }
        vcnt++;
    }
    if(vcnt==20){
        printf("write successful.");
    }else {
        printf("write Fail.");
    }

    //fclose(fptr);

    //fputs
    //FILE *fptr1 = fopen("file.txt","a");
    char istr1[20]="fputsoperation\n";
    fputs(istr1,fptr);
    //fclose(fptr1);

    //fprintf
    //FILE *fptr2 = fopen("file.txt","a");
    int roll_no=4;
    char name[20]="prajwal";
    char branch[21]="Computer Application";
    fprintf(fptr,"%d %s %s",roll_no,name,branch);
    fclose(fptr);
    return 0;
}