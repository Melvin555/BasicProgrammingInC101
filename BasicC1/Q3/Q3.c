#include<stdio.h>

void main(){
    int height, result;
    printf("Please insert the height (cm): ");
    scanf("%d",&height);
    result = (height-100)*2*0.9;
    printf("The proper weight is: %d kg", result);
    getch();
}