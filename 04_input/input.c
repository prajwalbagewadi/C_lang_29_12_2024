//scanf() for user input

#include<stdio.h>
int main(){
    int num;
    printf("enter the val:");
    //scanf("format specifier",&var_name)
    scanf("%d",&num);
    printf("num=%d\n",num);

    char c,temp;
    printf("enter the char:");
    //scanf("format specifier",&var_name)
    scanf("%c",&c);
    printf("c=%c\n",c);

    return 0;
}