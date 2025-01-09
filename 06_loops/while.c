//while loop

#include<stdio.h>
int main(){
    int itr=11; // ilterator
    // assigning val to ilterator is called initilization

    while(itr<10){ // stoping condition
        
        printf("%d\n",itr);
        itr++;//increament statement

    }

    int num;
    itr=1;
    printf("enter num to get table:");
    scanf("%d",&num);
    printf("num=%d\n",num);
    while(itr<10){ // stoping condition
        printf("%d\n",num*itr);
        itr++;//increament statement
    }
    return 0;
}