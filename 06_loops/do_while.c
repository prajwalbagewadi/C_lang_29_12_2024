//do_while 
#include<stdio.h>
int main(){
    int i=11;
    do{
        printf("processing do_while loop\n");
        printf("%d\n",i);
        i++;
    }while(i<=10);

    int selector;
    do{
        printf("select option 1 to Buy\n");
        printf("select option 2 to remove\n");
        printf("select option 3 to checkout\n");
        printf("select the option:");
        scanf("%d",&selector);
        switch(selector){
            case 1 :{
                printf("item bought\n");
            }
            break;
            case 2 :{
                printf("item removed\n");
            }
            break;
            case 3 :{
                printf("exit\n");
            }
            break;
            default :{
                printf("invaid input\n");
            }
        }
    }while(selector<3);

    return 0;
}