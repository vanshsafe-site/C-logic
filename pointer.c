// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
// Write C code here
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    int *p = &a;
    printf("%p \n", &a);//address
    printf("%d \n", p );// garbage value
    printf("%d \n", *p);// real value
    printf("%p \n", p); //address
    printf("%p \n", *p); // dont know.....but feels useless
    return 0;
}
