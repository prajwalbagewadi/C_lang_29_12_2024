#include<stdio.h>
#include<string.h>
int main(){
/*
    //syntax         (arrayofChars)  
    //char-datatype str_name[size] = val; 
    char str_name[5]="hello";
    char str_name2[5]={'h','e','l','l','o'};
    printf("str_name=%s\n",str_name);
    printf("str_name2=%s\n",str_name2);

    char str1[3];
    printf("Enter your name:");
    scanf("%s",&str1);
    printf("name=%s\n",str1);

    char temp;
    scanf("%c",&temp);
    char str2[3];
    for(int i=0;i<3;i++){
        printf("enter single char:");
        scanf("%c",&str2[i]);
        //accept enter 

        char temp;
        scanf("%c",&temp);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%c ",str2[i]);
    }
    printf("\n");

    //strlen() :returns the length of string
    char stri[100]="UniPune offers a 2 years Master of Computer Applications (MCA) course at the PG level. To get";
    printf("len of str=%d\n",strlen("returns the length of string name."));
    printf("\n");
    
    //without strlen()
    int len=0;
    for(int i=0;i<100;i++){
        if(stri[i]!=0){
            len=len+1;
        }
    }
    printf("without strlen() size of string=%d\n",len);

    //strcpy() :copies content of src string into dest string;
    char src[100]="copies the contents of source string to destination string.";
    char dest[100];
    strcpy(dest,src);
    printf("dest=%s\n",dest);

    //without strcpy()
    int size=100;
    char src1[100]="copies the contents of source string to destination string.";
    for(int i=0;i<size;i++){
        printf("%d ",src1[i]);
    }
    char dest1[100];
    for(int i=0;i<size;i++){
        if(src1[i]!=0){
            dest1[i]=src1[i];
        }
    }
    printf("without strcpy() dest1 string=%s\n",dest1);
   
    

    //strcat() :concats or joins first string with second string. The result of the string is stored in first string.
    char src2[100]="First name.";
    char dest2[100]="Last name.";
    strcat(src2,dest2);
    printf("concatenated string with strcat()=%s\n",src2);

    //without strcat()
    char result[100];
    for(int i=0;i<100;i++){
        if(src2[i]!=0){
            result[i]=src2[i];
        }
        if(src2[i]==0){
            if(dest2[i]!=0){
                result[i]=dest2[i];
            }
        }
    }
    printf("without strcat()=%s\n",result);
    
    char src3[100]="first Name.";
    //scanf("%s",&src3);
    char dest3[100]="Last name.";
    for(int i=0;i<100;i++){
        if(src3[i]==0){
            if(dest3[i]!=0){
                src3[i]=dest3[i];
            }
        }else{
            printf("continue");
            continue;
        }
    }
    printf("without strcat()=%s\n",src3);

    //strrev():returns reverse string.
    char src4[100]="returns";
    //strrev(src4);
    printf("with strrev()=%s\n",src4);

    printf("\n");
    printf("without strrev()=");
    for(int i=99;i>=0;i--){
        printf("%c",src4[i]);
    }

    printf("\n");
    //strlwr()
    char src5[100]="HELLO";
    //strlwr(src5);
    printf("with strlwr()=%s\n",src5);


    //without strlwr()
    for(int i=0;i<100;i++){
        if(src5[i]!=0){
            src5[i]=(src5[i]+32);
        }
 
    }
    printf("without strlwr()=%s\n",src5);


    //strupr()
    char src6[100]="cat";
    //strupr(src6);
    printf("with strupr()=%s\n",src6);

    //without strupr()
    for(int i=0;i<100;i++){
        if(src6[i]!=0){
            src6[i]=(src6[i]-32);
        }
 
    }   
    printf("without strupr()=%s\n",src6); 
*/
    //strcmp()
    char src7[100]="apple";
    char dest7[100]="apple2";
    printf("with strcmp():%d\n",strcmp(src7,dest7));

    //without strcmp()
    int val=-1;
    for(int i=0;i<100;i++){
        if(src7[i]==dest7[i]){
            val=0;
        }else{
            val=-1;
        }
    
    }
    if(val=0){
        printf("Strings are Equals.\n");
    }else {
        printf("Strings are not Equals.\n");
    }
    return 0;
}