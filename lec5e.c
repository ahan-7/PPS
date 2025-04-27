/*
Question:4:
write a c programe to check the age of a candidate and determine whether he is eligible to cast his/her vote or not ? */ 

//solution:

#include<stdio.h>
int main (){
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if(a>=18){
        printf("You are eligible to vote.\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }
    return 0;
}