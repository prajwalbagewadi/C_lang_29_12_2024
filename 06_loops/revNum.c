// reverse a number
#include<stdio.h>
int main(){
    int total=1;
    int num=123;
    // for(int i=0;num!=0;i++){
    //     int temp=num;
    //     total+=num%10;
  
  
    //     temp=temp/10;
    //     num=temp;
    // }
    while(num%10!=0){
        int temp=num;
        total=num%10;
        printf("%d",total);
        temp=temp/10;
        num=temp;
    }
    //printf("%d",total);
    return 0;
}