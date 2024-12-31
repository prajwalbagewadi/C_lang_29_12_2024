/**
 * ==
 * !=
 * > greater than
 * < less than
 * <= less than
 * >= greater than
 */

#include<stdio.h>
int main(){
    int a=10;
    int b=10;
    int c=15;
    //equal to
    printf("a==c %d\n",a==c);
    //not equal to 
    printf("a!=c %d\n",a!=c);
    printf("a!=b %d\n",a!=b);
    // < less than
    printf("a<c %d\n",a<c);
    // > greater than
    printf("a>c %d\n",a>c);
    // < less than or equal to
    printf("a<=b %d\n",a<=b);
     // > less than or equal to
    printf("a>=c %d\n",a>=c);
     printf("a>=b %d\n",a>=b);
    return 0;
}