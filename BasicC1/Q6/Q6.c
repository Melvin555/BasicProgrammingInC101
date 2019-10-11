#include<stdio.h>

void main(){
    int a, b, result;
    char AnOperator;
    printf("Please insert the first integer: ");
    scanf("%d", &a);
    printf("Please insert the second integer: ");
    scanf("%d", &b);
    printf("Please insert the operator (+ - * /): ");
    scanf(" %c", &AnOperator);
    if(AnOperator == '+'){
        result = a + b;
    }
    else if(AnOperator == '-'){
        result = a - b;
    }
    else if(AnOperator == '*'){
        result = a * b;
    }
    else if(AnOperator == '/'){
        result = a / b;
    }
    else{
        printf("Operator is not in the list!");
    }
    
    printf("%d%c%d=%d",a,AnOperator,b,result);
    getch();
}