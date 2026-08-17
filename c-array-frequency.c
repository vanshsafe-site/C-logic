#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4,5,2};
    int n = 15;

    for(int i = 0; i <n; i++){ //chatgpt formula
        int count=0;
        for(int j =0; j<n; j++){
            if (a[i] == a[j]){
                count++;
            };
            
        }
        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;     
    }

   
