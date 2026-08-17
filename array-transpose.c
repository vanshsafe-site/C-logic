// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[2][3] ={
        {1,2,3},
        {3,4,5},
    };
    int b[3][2];
    int sum = 0;
    for(int i = 0; i <2;i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d ", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
printf("Transpose is\n");
for(int i = 0; i <3;i++){
        for(int j = 0; j < 2 ; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
