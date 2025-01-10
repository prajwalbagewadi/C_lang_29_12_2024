// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
           printf(" ");
        }
        for(int j=1;j<=i;j++){
           printf("*");
        }
        printf("\n");
    }

    return 0;
}