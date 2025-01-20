#include<stdio.h>

//syntax:
//return-type function-name();
void Greet(); //function header

int main(){
    //syntax:
    //function name();
    Greet(); //function call;
    return 0;
}

//syntax:
//return-type function-name(){
    //function def block
    //task when function is called
//}
void Greet(){ //function defination
    printf("Good Morning\n");
}