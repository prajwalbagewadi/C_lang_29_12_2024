/**
 * && And
 * || OR
 * !  Not Reverse
 * 
 * &&
 * a b &&
 * 0 0 0
 * 0 1 0 
 * 1 0 0 
 * 1 1 1
 * 
 * ||
 * a b ||
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 1 
 * 
 */

#include<stdio.h>
int main(){

    int num1=10;
    int num2=20;
    int num3=10;

    //&&
    printf("num1!=num2 && num1<num2 :%d\n",num1!=num2 && num1<num2);
    //||
    printf("num1>num2 || num1<num2 :%d\n",num1>num2 || num1<num2);
    //!
    printf("!(num1!=num2 && num1<num2) :%d\n",!(num1!=num2 && num1<num2));
    return 0;
}