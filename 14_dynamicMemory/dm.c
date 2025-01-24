#include<stdio.h>
#include<stdlib.h>
int main(){
    //syntax
    //data-type *pointer=(type-cast*)malloc(sizeof(data-type))
    int *ptr= (int*)malloc(sizeof(int));
    printf("ptr=%x\n",ptr);
    *ptr=10;
    printf("*ptr=%d\n",*ptr);
    printf("*ptr=%d\n",*ptr);

    //syntax
    //data-type *pointer=(type-cast*)calloc(numberofblocks,sizeof(data-type))
    int *ptr2=(int*)calloc(5,sizeof(int));
    int i=10,size=1;
    printf("ptr2=%x\n",ptr2);
    while(ptr2!=NULL && size<=5){   
        printf("inside loop\n");
        *ptr2=i;
        i+=10;
        printf("ptr2=%x\n",ptr2);
        printf("*ptr2=%d\n",*ptr2);
        size++;
        ptr2++;
    }
    // while(rec!=NULL  && size<=5)
    // {
    //     printf("*rec=%d\n",*rec);
    //     size++;
    //     rec++;
    // }
}