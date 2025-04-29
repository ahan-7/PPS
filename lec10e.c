// reverse of an array. A[5]=12,34,56,78,90
#include<stdio.h>
int main()
{
    int A[5] = {12, 34, 56, 78, 90};
 int i = 0, j;
  int length=sizeof(A)/sizeof(A[0]);
    j=length-1;
   
   while(i<=j)
   {
         int temp = A[i];
         A[i] = A[j];
         A[j] = temp;
         i++;
         j--;
   } 
   printf("Reversed array: ");
   for (i = 0; i < length; i++) {
       printf("%d ", A[i]);
   }
   printf("\n");
    return 0;
}