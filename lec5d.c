/*
Question:3:
write a c programe to find whether a given year is leap year or not*/ 
//solution:
#include<stdio.h>
int main (){
    int a;
    printf("Enter a year");
    scanf("%d",&a);
    if(a%4==0){
        printf("The year is leap year.\n");
    }
    else{
        printf("The year is not leap year.\n");
    }
    return 0;
}