#include<stdio.h>

int fact(int n);

int main(){
    int result=fact(5);
    printf("result=%d",result);
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}