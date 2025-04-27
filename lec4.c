#include<stdio.h>
int main(){

/* Generating ASCII  from character.*/ 
// BY TYPE CASTING.

//  ->
printf("Generating ASCII  from character.\n");
int a;
printf("Enter a number:(range 65-90 or 97-122 or 48-57 or 32)%d\n",a);
scanf("%d",&a);
    
    int b = (char)a;
    printf(" The ASCII value is %c \n",b);

//  ->
    // int x = 'A' ;
    // int y= (int)x;
    // printf("%d",x);

 /*or we can code this kind of formar specifier*/
  
// int m = 'A' ;
//     printf("%d",m);

    return 0;
}