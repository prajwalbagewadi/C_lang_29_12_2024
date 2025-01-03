//if - else if - else

#include<stdio.h>
int main(){
    int percent=65;
    if(percent>90 && percent<=100){
        printf("marks=%d Grade:A+\n",percent);
    }else if(percent>80 && percent<=90){
        printf("marks=%d Grade:A\n",percent);
    }else if(percent>70 && percent<=80){
        printf("marks=%d Grade:B+\n",percent);
    }else if(percent>60 && percent<=70){
        printf("marks=%d Grade:B\n",percent);
    }else if(percent>50 && percent<=60){
        printf("marks=%d Grade:C+\n",percent);
    }else if(percent>40 && percent<=50){
        printf("marks=%d Grade:C\n",percent);
    }else if(percent>34 && percent<=40){
        printf("marks=%d Grade:D\n",percent);
    }else{
        printf("marks=%d Grade:fail\n",percent);
    }
    printf("promoted to Next Sem");
    return 0;
}