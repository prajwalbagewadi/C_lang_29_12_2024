// reverse a number
#include<stdio.h>
#include<stdlib.h>
int main(){
    int total=0;
    int num=5675;
    // printf("enternum:");
    // scanf("%d",&num);

    while(num!=0){
        int temp=num,firstdigit, seconddigit;
        
        firstdigit=temp/10;
        while(firstdigit%10!=(temp%10)){
            firstdigit=firstdigit/10;
        }
        printf("firstdigit=%d\n",firstdigit);
        
        total=num%10;
        printf("total=%d\n",total);
        
        if(firstdigit==total){
            printf("palindrome");

           
        }else{
            printf("not palindrome");
            exit(0);
        }
    

        temp=temp/10;
        num=temp;
        
        // //if(total==)
        // printf("%d",total);
        // temp=temp/10;
        // num=temp;
    }
    //printf("%d",total);
    return 0;
}