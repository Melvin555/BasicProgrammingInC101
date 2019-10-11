#include<stdio.h>
#include<math.h>

int add_digits(int n){
  int sum = 0;
  if (n == 0) {
    return 0;
  }
  sum = n%10 + add_digits(n/10);
  return sum;
}

void main(){
  int input, output;
  printf("Please insert the integer less than 32767 to be summed: \n");
  scanf("%d", &input);
  if(input>32767){
    printf("The number is more than limit");
  }
  else{
    output = add_digits(input);
    printf("The sum of the input number is %d\n", output);
  }
  
  getch();
}