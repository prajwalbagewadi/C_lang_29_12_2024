/**
 * =
 * +=
 * -=
 * *=
 * /=
 * %=
 */
#include<stdio.h>
int main(){
    //=
    int a = 10;
    a = 20;

    //+=
    a = 10;
    printf("a= %d\n",a);
    a+=5; // a = a + 5
    printf("a+=5 %d\n",a);

     //-=
    a = 10;
    printf("a= %d\n",a);
    a-=5; // a = a - 5
    printf("a-=5 %d\n",a);

     //*=
    a = 10;
    printf("a= %d\n",a);
    a*=5; // a = a * 5
    printf("a*=5 %d\n",a);

     // /=
    a = 10;
    printf("a= %d\n",a);
    a/=5; // a = a / 5
    printf("a/=5 %d\n",a);

     //%=
    a = 10;
    printf("a= %d\n",a);
    a%=5; // a = a + 5
    printf("a%=5 %d\n",a);
    return 0;
}