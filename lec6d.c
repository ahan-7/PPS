// Program to calculate the sum of the series: 1 + x + x^2/2 + x^3/3 + ... + x^n/n
#include<stdio.h>
#include<math.h>
int main (){
    int n, x, sum = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
   
    scanf("%d", &x);
    for(int i = 1; i <= n; i++){
        sum = sum + ( pow(x, i)/i);
    }
    printf("The sum is: %d\n", sum);
    return 0;
}