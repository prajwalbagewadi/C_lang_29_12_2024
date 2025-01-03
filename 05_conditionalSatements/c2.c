//if/else

#include<stdio.h>
int main(){
    int num;
    printf("enter the val to check even or odd:");
    scanf("%d",&num);
    if(num%2==0){
        printf("num=%d is even\n",num);
    }else{
        printf("num=%d is odd\n",num);
    }

    return 0;
}