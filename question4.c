// If the marks obtained by a student in 5 different subjects are input through the keyboard,
// find out the aggregate marks and the percentage marks obtained by a student. 
//Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h>

int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("enter the marks of all subjects:");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("\nAggregate marks:%f\nPercentage:%f",sub1+sub2+sub3+sub4+sub5,(sub1+sub2+sub3+sub4+sub5)/5);
    return 0;

}
