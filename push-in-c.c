// Online C compiler to run C program online
#include <stdio.h>
int stack[5];
    int top = -1;
int push(int value){
    top++;
    stack[top] = value;

}
int main() {
    // Write C code here
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    for(int i = 0; i<5;i++){
        printf("%d\n",stack[i]);
    }

    return 0;
}
