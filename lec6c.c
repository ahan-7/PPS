// sum of > 1+2^2+3^3+....+n^n.
#include<stdio.h>
#include<math.h>

int main (){
    int sum = 0;
    for(int i = 1; i <= 3; i++){
        sum = sum + pow(i, i);
    }
    printf("The sum is: %d\n", sum);
    return 0;
}