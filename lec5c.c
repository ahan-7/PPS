/*
Question:3:
write a c programe to check weather a number is posative or negative*/ 

// SOLUTION:
#include<stdio.h>
int main (){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("The number is posative.\n");
    }
    else if(a<0){
        printf("The number is negative.\n");
    }
    else{
        printf("The number is zero.\n");
    }
    return 0;
}