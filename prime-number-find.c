#include <stdio.h>   

int main() {
    int a, i;
    int c = 0;
    int flag = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 2; i < a/2; i++) {// reduce processing
        if (a % i == 0) {   
                 
            int flag = 1;
            break;
        }
    }

     if (flag == 2)
        printf("%d is a Prime Number\n", a);
    else
        printf("%d is NOT a Prime Number\n", a);

    return 0;
}
