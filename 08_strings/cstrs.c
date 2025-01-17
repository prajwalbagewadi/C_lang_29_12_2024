#include<stdio.h>
#include<string.h>
int main(){
    //syntax         (arrayofChars)  
    // char-datatype str_name[size] = val; 
    char str_name[5]="hello";
    char str_name2[5]={'h','e','l','l','o'};
    printf("str_name=%s\n",str_name);
    printf("str_name2=%s\n",str_name2);

    char str1[3];
    // printf("Enter your name:");
    // scanf("%s",&str1);
    // printf("name=%s\n",str1);

    // char temp;
    // scanf("%c",&temp);
    // char str2[3];
    // for(int i=0;i<3;i++){
    //     printf("enter single char:");
    //     scanf("%c",&str2[i]);
    //     //accept enter 

    //     char temp;
    //     scanf("%c",&temp);
    // }
    // printf("\n");
    // for(int i=0;i<3;i++){
    //     printf("%c ",str2[i]);
    // }
    // printf("\n");

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
    return 0;
    
}