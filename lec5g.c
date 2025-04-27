/* write a c programe to determine the eligibility for admission in a university besed on the following criteria--
marks in maths >= 65 and marks in physics >= 55 and marks in chemistry >= 50 and total in all three subjects >= 190 or total in maths and physics >= 140.
input marks in maths 72, 
physics and chemistry 65,51.
 Total in all three subjects 188 
 Total in maths and physics 137.
 and output whether the student is eligible for admission or not */
 //solution:
#include<stdio.h>
int main (){

    int maths,physics,chemistry,total1,total2;

    printf("Enter marks in maths, physics and chemistry:");
    scanf("%d %d %d",&maths,&physics,&chemistry);

    total1 = maths + physics + chemistry;
    total2 = maths + physics;
    
    if(maths>=65 && physics>=55 && chemistry>=50 && total1>=190 || total2>=140){
        printf("The student is eligible for admission.\n");
    }
    else{
        printf("The student is not eligible for admission.\n");
    }
    return 0;
}