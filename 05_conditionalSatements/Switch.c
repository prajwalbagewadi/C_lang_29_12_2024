//switch statement
#include<stdio.h>
int main(){
    printf("Vending Machine:\n");
    printf("enter 50 ruppes for chips.\n");
    printf("enter 20 ruppes for cold-drink.\n");
    printf("enter 10 ruppes for chocolates.\n");
    printf("enter The Amount:\n");
    int Expr;
    scanf("%d",&Expr);    
    switch(Expr){
        case 50 : {
            printf("Chips.\n");
            printf("enter A salted");
            printf("enter B onion\n");
            printf("enter C tomato.\n");
            printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("Drop Salted lays chips.\n");
                }
                break;
                case 'B':{
                    printf("Drop onion lays chips.\n");
                }
                break;
                case 'C':{
                    printf("Drop tomato lays chips.\n");
                }
                break;
                default:{
                    printf("invalid input");
                }
            }
        }
        break;
        case 20 : {
            printf("Cold-drink.\n");
            printf("enter A coke\n");
            printf("enter B sprite\n");
            printf("enter C maza\n");
            printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("Drop coke.\n");
                }
                break;
                case 'B':{
                    printf("Drop sprite.\n");
                }
                break;
                case 'C':{
                    printf("Drop Maza.\n");
                }
                break;
                default:{
                    printf("invalid input");
                }
            }
        }
        break;
        case 10 : {
            printf("Chocolates.\n");
            printf("enter A Gems\n");
            printf("enter B 5Star\n");
            printf("enter C Perk\n");
            printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("Drop Gems\n");
                }
                break;
                case 'B':{
                    printf("Drop 5Star\n");
                }
                break;
                case 'C':{
                    printf("Drop Perk\n");
                }
                break;
                default:{
                    printf("invalid input");
                }
            }
        }   
        break;
        default:{
            printf("Error : invaild Amt.");
        }
   }

    return 0;
}