// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[2][3] ={
        {1,2,3},
        {3,4,5},
    };
    int sum = 0;
    for(int i = 0; i <2;i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d ", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;
}
