#include <stdio.h>
 
void main()
{
    int num1, num2, gcd, lcm, remainder, numer, denomi;
 
    printf("Please enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2){
        numer = num1;
        denomi= num2;
    }
    else{
        numer = num2;
        denomi = num1;
    }
    remainder = numer % denomi;
    while (remainder != 0){
        numer   = denomi;
        denomi = remainder;
        remainder   = numer % denomi;
    }
    gcd = denomi;
    lcm = num1 * num2 / gcd;
    printf("The solution are %d and %d \n", gcd, lcm);
    system("pause");
}