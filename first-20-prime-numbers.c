#include <stdio.h>   

int main() {
    int a = 2, i;
    int c = 0;
    int flag = 0;
    int count = 0;
    while(count<=20){ //Whole prime Number logic trapped in a loop
        
    flag = 0;//Flag needs to be reset everytime after prime number is found
    for (i = 2; i < a/2; i++) {// reduce processing
        if (a % i == 0) {   
                 //General Formula
            flag = 1;
            break;
        }
    }

     if (flag == 0){
        printf("%d \n",a);// Number stored in "a" in that particular moment will be printed 
        count++;
    }
    a ++;
}
    return 0;
}
