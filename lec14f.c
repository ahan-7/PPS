#include<stdio.h>
int power(int n,int p){
    if(p==0){
        return 1;
    }
    else{
        return n*power(n,p-1);
    }
}
int main(){
    int n,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);
    int result = power(n,p);
    printf("%d to the power of %d is %d\n", n, p, result);
    return 0;
}