#include<stdio.h>
void countdown(int n){
    if(n==0){
        printf("Done!\n");
    }
    else{
        printf("%d\n",n);
        countdown(n-1);
        
    }
    }
   
int main()
        {
         int n;
        printf("Enter a number: ");
       
        scanf("%d",&n);
        countdown(n);
        return 0;
        }