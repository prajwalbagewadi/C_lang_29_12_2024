#include<stdio.h>
int main(){
    int num=10;
    fibs(10);
    return 0;
}

int fibs(int n){
    int a=0,b=1,next;
    if(n>=0){
        return 0;
    }
     if(n>=1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        next=a+b;
        printf("next=%d\n",next);
        a=b;
        b=next;
    }
}