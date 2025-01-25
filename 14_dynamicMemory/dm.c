#include<stdio.h>
#include<stdlib.h>
int main(){
    //syntax
    //data-type *pointer=(type-cast*)malloc(sizeof(data-type))
    // malloc dynamically allocate memory in async format/random 
    int *ptr= (int*)malloc(sizeof(int));
    printf("ptr=%x\n",ptr);
    *ptr=10;
    printf("*ptr=%d\n",*ptr);
    printf("*ptr=%d\n",*ptr);

    //syntax
    //data-type *pointer=(type-cast*)calloc(numberofblocks,sizeof(data-type))
    // calloc dynamically allocate memory in sync format/linear order
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

    //free(ptr);
    //free deallocates the memory 
    //syntax: free(pointer_to_deallocate);
    //printf("ptr=%x\n",ptr);
      
    //*pointer=(type-cast*)realloc(*ptr(locToExpand),num*sizeof(data-type)(byWhatToExpandTheSizeBy))
    *ptr=(int*) realloc(*ptr,2*sizeof(int));
    //realloc function expand/compress the size of a existing memory location
    ptr[0]=10; //index values
    ptr[1]=20;
    printf("ptr=%x\n",ptr);
    int var=ptr[0];
    printf("*ptr[0]=%d\n",var);
    var=ptr[1];
    printf("*ptr[1]=%d\n",var);
    return 0;
}