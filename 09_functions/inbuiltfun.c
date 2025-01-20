#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char src1[100]="apple";
    printf("len of string=%d\n",strlen(src1));
    printf("to upper=%s\n",strupr(src1));
    
    char name[100];
    printf("Enter name:");
    scanf("%s",&name);
    printf("name=%s\n",name);
    
    printf("10^6=%f\n",pow(10,6));
    printf("6 square root=%f\n",sqrt(6));

    //syntax
    //return-type function-name(parameters); //function-call
    return 0;
}