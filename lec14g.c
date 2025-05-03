#include<stdio.h>
int count_down(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+count_down(n/10);
    }
    return 0;
}
int main()
        {
         int n;
        printf("Enter a number: ");
        
        scanf("%d",&n);
        printf("The number of digits are: %d\n",count_down(n));
        return 0;
        }   
