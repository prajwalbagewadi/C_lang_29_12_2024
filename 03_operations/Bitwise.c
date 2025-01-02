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
    
    //<<
    printf("a<<1=%d\n",a<<1);

    //>>
    a=20;
    printf("a>>1=%d\n",a>>1);
    
    printf("a>>2=%d\n",a>>2);
    return 0;
}