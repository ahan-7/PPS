// sum  of all elements of an array.
#include<stdio.h>   
int main(){
    int a[5],sum=0;
    printf("Enter 5 numbers: ");
    
    {
        for ( int i = 0; i < 5; i++)
       scanf("%d",&a[i]);
    }
    printf("The numbers are: ");
    for ( int i = 0; i < 5; i++)
    {
       printf("%d ",a[i]);
       sum=sum +a[i];
    }
    printf("\nThe sum of all elements is %d",sum);
    
    return 0;
}