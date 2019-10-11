#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void main(){
    char input;
    int number;
    printf("Please input a single letter/number/symbol: \n");
    scanf(" %c", &input);
    if(input>='a' && input<='z'){
        input = input - 32;
    }
    else if(input>='A' && input<='Z'){
        input = input + 32;
    }
    else{
        number = input - '0';
    }
    
    if (isdigit(number)){
        printf("The result is %d",number);
    }
    else{
        printf("The result is %c",input);
    }

    getch();
}