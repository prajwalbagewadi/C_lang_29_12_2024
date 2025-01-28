#include<stdio.h>
#include<string.h>
//file handling modes:
// r -> read
// w -> write
// a -> append


int main(){
    FILE *fptr;
    //syntax: fopen("file_name.txt","mode")
    fptr=fopen("example.txt","r");

    if(fptr!=NULL){
        printf("file exists\n");
    }else {
        printf("file doesn't exists\n");
    }

    //reading 
    //fgetc; get char
    // char temp;
    // int no_char=0,no_word=0,no_line=0;

    // while((temp=fgetc(fptr))!=EOF){
    //     printf("ASCII val of char=%d\t",temp);
    //     printf("temp=%c\n",temp);
    //     int tmpint=(int)temp;
    //     printf("tmpint=%d\n",tmpint);
    //     //words
    //     if(tmpint==32 ||tmpint==10 || tmpint==59){
    //         printf("Space occured\n");
    //         no_word++;
    //     }
    //     //line
    //     if(tmpint==10 || tmpint==59){
    //         printf("line occured\n");
    //         no_line++;
    //     }
    //     no_char++;
    // }
    // printf("no of characters in file:%d\n",no_char);
    // printf("no of words in file:%d\n",no_word);
    // printf("no of lines in file:%d\n",no_line);
    
    //fgets; get line
    // char str[100];
    // while((fgets(str,100,fptr))!=NULL){
    //     printf("line=%s",str);
    // }

    //fscanf; format based read
    int empid;
    char name[100],desg[100];
    float sal;                                            //num_of_cols
    while(fscanf(fptr,"%d %s %s %f",&empid,&name,&desg,&sal)==4){
        printf("empid=%d\t",empid);
        printf("name=%s\t",name);
        printf("desg=%s\t",desg);
        printf("sal=%f\t",sal);
        printf("\n");  
    }
    
    return 0;
}