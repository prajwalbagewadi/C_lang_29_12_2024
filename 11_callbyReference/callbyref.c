#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("inside fun a=%d b=%d\n",*a,*b);
}

void arr_total(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    printf("arr_total=%d\n",total);
}

void increament(int *var){
    *var+=1;
}

int main(){
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    //swap(a,b); no changes
    swap(&a,&b); // call by reference
    printf("a=%d b=%d\n",a,b);

    int arr[5]={5,4,3,2,1};
    arr_total(arr,5);

    //increament
    int num=10;
    printf("num=%d\n",num);
    increament(&num);
    printf("num=%d\n",num);
    return 0;
}