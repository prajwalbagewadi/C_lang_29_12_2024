//multidimensional arrays

#include<stdio.h>
// 1 2 3
// 4 5 6
// 7 8 9
int main(){
    int rs=3;//cs=3; //rs=rowsize cs=colsize
    int cs=3;
    int mat[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n"); //create a newline after each row
    }

    int mat2[3][3];
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            printf("mat2[%d][%d]:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n"); //create a newline after each row
    }

    //linear search
    int key,flag=0;
    printf("enter element to search in 2d array:");
    scanf("%d",&key);
     for(int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            
             if(key==mat2[i][j]){
               printf("element found->at index mat2[%d][%d]",i,j);
               flag=1; 
            }
            // if(key==mat2[i][j]){
            //    printf("element found->%d ",mat2[i][j]);
            //    flag=1; 
            // }else {
            //    printf("%d ",mat2[i][j]);
            // }
        }
        printf("\n"); //create a newline after each row
    }
    if(flag==0){
        printf("Element not found anywhere.");
    }
    return 0;
}