#include<stdio.h>
//global scope
extern int ext=40; //value is retained throught program execution

void fun_block(){
    //local scope : inside function only
    printf("function block:\n");
    auto int aut=10; //allocates memory in ram.
    printf("aut=%d\n",aut);
    aut++;
    register int reg=20; //allocates memory in register.
    printf("reg=%d\n",reg);
    reg++;
    static int stat=30; //value is retained even after function execution
    printf("stat=%d\n",stat);
    stat++;
    //outside scope
    printf("ext=%d\n",ext);
    ext++;
}

int main(){
    printf("Main block:\n");
    auto int aut = 9;
    printf("aut=%d\n",aut);
    register int reg=21; 
    printf("reg=%d\n",reg);
    fun_block();
    fun_block();
    fun_block();
    fun_block();
    fun_block();
    static int stat=50; //value is retained even after function execution
    printf("stat=%d\n",stat);
    stat++;
    //outside scope
    printf("ext=%d\n",ext);
    ext++;
    return 0;
}