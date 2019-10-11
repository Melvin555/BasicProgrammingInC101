#include<stdio.h>
#include<math.h>

void main(){
    int number, single, tenth, hundreds;
    printf("Please input the number (in hundreds): ");
    scanf("%d",&number);
    single = number%10;
    number = number/10;
    tenth = number%10;
    number = number/10;
    hundreds = number%10;
    printf("%d     %d     %d",hundreds, tenth, single);
    getch();
}
