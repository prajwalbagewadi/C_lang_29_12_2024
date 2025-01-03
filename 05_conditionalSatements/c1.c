//if
#include<stdio.h>
int main(){
    int num;
    printf("Enter the val:");
    scanf("%d",&num);
    if(num>10){
        printf("num=%d is greater than 10.",num);
    }
    printf("exiting..");
    return 0;
}