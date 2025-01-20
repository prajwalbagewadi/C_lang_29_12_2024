#include<stdio.h>

//syntax:
//return-type function-name();
void Greet(); //function header
void addition();
void add(int x,int y);
int  areaOfCircle(int r);

int main(){
    //syntax:
    //function name();
    Greet(); //function call;
    int a=40,b=50;
    addition();
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    add(a,b);//actual parameters
    add(50,50);
    int radius=5;
    int result=areaOfCircle(radius);
    printf("areaofcircle=%d\n",result);
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
void addition(){
    int a=10,b=20;
    printf("addition=%d\n",(a+b));
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void add(int x,int y){//formal parameters
    printf("add=%d\n",(x+y));
}
int  areaOfCircle(int r){
    return 3.142*r*r;
}