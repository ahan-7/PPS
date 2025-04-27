/* Q1.>

write a c programe to accept two intigers and check weather they are equal or not.
SOLUTION:
*/

#include<stdio.h>
int main (){
    
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("The numbers are equal.\n");
    }
    else{
        printf("The numbers are not equal.\n");
    }
    return 0;
}