/* question : 1+3+5+7+9...+n 
Write a C program to find the sum of odd natural numbers*/
//solution:
#include <stdio.h>
int main () {

   int n, sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + (2*i-1);
    }
    printf("The sum of first %d odd natural numbers is: %d\n", n, sum);

    return 0;
}