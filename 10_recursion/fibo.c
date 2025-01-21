#include<stdio.h>

int fib(int n);

int main(){
    
    for(int i=1;i<=10;i++){
        int num=fib(i);
        printf("->>main=%d\n",num);
    }
   
    return 0;
}

int fib(int n){
    //printf("n=%d\n",n);
    if(n==1){
        return 1;
    }
    if(n==0){
        //printf("stop\n");
        return 0;
    }
    return fib(n-1)+fib(n-2);
}