// print odd of an array
#include<stdio.h>
int main()
{
    int a[5]={12,34,3,78,90},i;
    
    printf("Odd elements are:\n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
        else
        {
            // Do nothing for even numbers
        }
    }
    return 0;
}