//Harry basic salary is input through the kryboard. His DA is 40% of the basic salary. Write a program
//to calculate his gross salary

#include<stdio.h>

int main(){
    float basic,gross;
    printf("Enter basic salary:");
    scanf("%f",&basic);
    gross=basic-(basic*0.4);
    printf("Gross salary:%f",gross);
    return 0;
}