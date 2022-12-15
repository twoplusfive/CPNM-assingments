// The distance between 2 cities (in km) is input through the keyboard. Write a program
// to convert and print the distance in metres, feet, inches and cm. 

#include<stdio.h>

int main(){
    float distance;
    printf("Enter the distance:");
    scanf("%f",&distance);
    printf("In metres:%f\nIn feet:%f\nIn inches:%f\nIn cm:%f",distance*1000,distance*3280,distance*39370,distance*100000);
    return 0;
}
