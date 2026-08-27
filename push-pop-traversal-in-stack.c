#include <stdio.h>

int main() {
    int stack[5] = {10,20,30};
    int top = 2;
    top++;
    stack[top] = 40;
    printf("%d\n", stack[top]);
    top--;
    printf("%d\n", stack[top]);
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
    return 0;
}
