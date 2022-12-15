//Write a program to input 2 numbers and make a simple calculator

#include<stdio.h>

int main(){
    float a,b,sum,sub,mult,div;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("ADD:%f\nSub:%f\nMult:%f\nDiv:%f",a+b,a-b,a*b,a/b);
    return 0;
}