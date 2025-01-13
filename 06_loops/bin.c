#include<stdio.h>
int main(){
    int num=633;
    for(int i=7;i>=0;i--){ //8 bits in char
        printf("%d",(num>>i)&1); 
        //>> right shift
        //& extract least sig bit
    }
}