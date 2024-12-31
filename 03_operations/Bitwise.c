/**
 * & And
 * | OR
 * ^ Xor
 * ~ Complement
 * << leftshift
 * >> rightshift
 * &
 * a b &
 * 0 0 0
 * 0 1 0
 * 1 0 0
 * 1 1 1
 * 
 * |
 * a b |
 * 0 0 0 
 * 0 1 1 
 * 1 0 1
 * 1 1 1
 * 
 * ^
 * a b ^
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 0
 * 
 * ~
 * a ~
 * 0 1
 * 1 0
 */

#include<stdio.h>
int main(){
    int a=5; // 0101
    int b=10; // 1010
    //&
    printf("a&b=%d\n",a&b);

    //|
    printf("a|b=%d\n",a|b);

    //^
    printf("a^b=%d\n",a^b);

    //~
    printf("~a=%d\n",~a); //unary operator works with single var or operand
    return 0;
}