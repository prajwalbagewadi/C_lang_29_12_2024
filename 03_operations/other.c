/**
 * sizeof
 * sizeof (operand)
 * , 
 * (operand1 , operand2)
 * ?:
 * (condition ? operand1 : operand2)
 * . dot -> used to access struct members
 * cast
 * (new_type) operand; 
 * & returns the address of a var
 * * pointer var
 */

#include<stdio.h>
int main(){
    int a = 10;
    char c = '$';
    //sizeof(var_name) 
    printf("size of a=%d\n",sizeof(a));
    printf("size of c=%d\n",sizeof(c));

    //,
    int i=1,j=1;

    //?: //ternary operator
    (10!=5) ? printf("yes\n") : printf("no\n");
    (10!=10) ? printf("yes\n") : printf("no\n");

    // . ->  //struct union

    //cast //type casting
    a = 5;
    float var=5.78;
    printf("a=%f\n",(float)a);
    printf("var=%d\n",(int)var);

    //&
    int num = 2000;
    printf("address of num=%x\n",&num);

    //*
    int num1 = 23;
    int *ptr = &num1;
    printf("*ptr=%d\n",*ptr); //disp the val at the address
    printf("ptr=%d\n",ptr);//disp the address of the pointing var
    printf("ptr=%x\n",ptr);
    return 0;
}