#include <stdio.h>
#include <stdlib.h>

// input two integer speed. Speed limit more than 10% fee 200 yuan. 
// speed more than 50%, "License revoked"

// clsp stands for calculate_speed_limit_percentage

int clsp(float standard, float exceed){
    float diff; 
    diff = (exceed-standard)/standard;
    // printf("\ndiff = %.1f", diff);

    if (diff>=0.1 && diff<=0.5){
        printf("\nExceed 10%%, Ticket 200");
    }
    else if (diff > 0.5){
        printf("\nExceed %.0f%%, License Revoked", diff*100);
    }
    else
    {
        printf("\nOK");
    }
    
}

void main(){
    float speed1, speed2, standard, exceed;
    printf("Please input two speed number: \n");
    scanf("%f %f", &speed1, &speed2);
    if (speed1>speed2){
        exceed = speed1;
        standard = speed2;
    }
    else if(speed2>speed1){
        exceed = speed2;
        standard = speed1;
    }
    // printf("standard = %.1f, exceed = %.1f", standard, exceed);
    clsp(standard, exceed);

    getch();
}