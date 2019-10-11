#include<stdio.h>

void main(){
    int celc, fahr;
    printf("Please input Fahrenheit to be converted into Celcius: ");
    scanf("%d",&fahr);
    celc = 5*(fahr-32)/9;
    printf("The Celcius degree is: %d",celc);
    getch();
}