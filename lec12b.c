// smallest number
#include<stdio.h>
int main (){
    int A[]={6,2,3,4,5};
    int s=A[0], p=0, l=sizeof(A)/sizeof(A[0]);
    for (int i = 1; i < l; i++)
    {
     if (A[i]<s)
     {
         s=A[i],p=i;
     }
    }
    printf("The smallest number is %d at position %d\n", s, p);
    return 0;
}
