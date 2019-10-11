#include<stdio.h>

void main(){
    int score1, score2, score3, average;
    printf("Please insert the three number for averaging:\n");
    scanf("%d %d %d", &score1, &score2, &score3);
    average = (score1 + score2 + score3) / 3;
    printf("The average result is: %d",average);
    getch();
}