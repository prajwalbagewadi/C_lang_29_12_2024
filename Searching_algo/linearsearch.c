#include<stdio.h>
int main(){
    //linear search or sequencial search
    int arr1[5]={5,4,6,9,1};
    printf("enter val to search:");
    int key;
    int flag=0;
    scanf("%d",&key);
    for(int i=0;i<5;i++) {
        if(key==arr1[i]) {
            printf("Element is present at arr[%d]=%d\n",i,arr1[i]);
            flag=1;
        }
    }
    if(flag==0) {
        printf("Element is not present\n");
    }
    return 0;
}