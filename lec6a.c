/* Question :  1+2+3+4+...+N 
Write a C program to find the sum of N natural numbers*/
//solution
#include <stdio.h>
int main (){
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}