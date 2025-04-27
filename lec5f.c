/*
Question:4:
write a c programe to find the largest of three numbers ?  */ 

//solution:

#include<stdio.h>   

int main (){

    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("The largest number is %d",a);
    }
    else if(b>a && b>c){
        printf("The largest number is %d",b);
    }
    else if(c>a && c>b){
        printf("The largest number is %d",c);
    }
    else{
        printf("The numbers are equal.\n");
    }
    return 0;
}