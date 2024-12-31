/**
 * +
 * -
 * *
 * /
 * % //returns remainder
 * 
 * ++ increament 
 * -- decrement
 *
 */

#include<stdio.h>
int main(){
    //add
    int a=10;
    int b=20;
    int c=a+b;
    printf("c=%d\n",c);
    printf("sum=%d\n",a+b);
    //sub
    printf("sub=%d\n",5-5);
    //multi
    printf("multi=%d\n",5*5);
    //div
    printf("div=%d\n",10/5);
    //mod
    printf("mod=%d\n",10%5);// returns the Remainder

    //increament
    int num=10;
    printf("num=%d\n",num);
    num++; //num=num+1;
    printf("num++=%d\n",num);

    //decrement
    
    num=20;
    printf("num=%d\n",num);
    num--; //num=num-1;
    printf("num--=%d\n",num);

    return 0;
}