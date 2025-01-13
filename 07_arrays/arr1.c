//arrays : derived data types / structure   which is used to store multiple elements of similar type


//syntax: 
// datatype array_name[size]={elements};

#include<stdio.h>
int main(){
    // //           0 1 2 3 4
    // int nums[5]={1,2,3,5,7}; //initilization
    // //array values are accessed with indexes starting from Zero(0)
    // printf("val=%d\n",nums[4]);
    // printf("val=%d\n",nums[2]);
    // //updating values or Reassiging values using index
    // nums[3]=4;
    // nums[4]=5;
    // printf("val=%d\n",nums[3]);
    // printf("val=%d\n",nums[4]);
    
    // int arr[100]={1,4,5,4,65,2,3,56,7,9,4,56,6,8,9,0,3,4,56,23,24,54,43};
    // // printf("arr=%d\n",arr);
    // // printf("arr=%x\n",arr);
    // // int index=0;
    // // printf("arr[0]=%d\n",arr[0]);
    // // index=index+1;
    // // printf("arr[1]=%d\n",arr[1]);
    // for(int i=0;i<100;i++){
    //     printf("arr[%d]=%d\n",i,arr[i]);
    // }

    // //accept and display array elements
    // //dynamic array
    // int size=5;
    // int dyn_arr[size];
    // //Accepting values
    // for(int i=0;i<size;i++){
    //    printf("enter val for dyn_arr[%d]:",i);
    //    scanf("%d",&dyn_arr[i]);
    // }
    // //displaying values   
    //  for(int i=0;i<size;i++){
    //     printf("val in dyn_arr[%d]:%d\n",i,dyn_arr[i]);
    // } 
    
    // //adding array elements
    // int total=0;
    // for(int i=0;i<size;i++){
    //    printf("enter val for dyn_arr[%d]:",i);
    //    scanf("%d",&dyn_arr[i]);
    //    total=total+dyn_arr[i];
    // }
    // //displaying values   
    //  for(int i=0;i<size;i++){
    //     printf("val in dyn_arr[%d]:%d\n",i,dyn_arr[i]);
    // } 
    // printf("total=%d\n",total);


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
