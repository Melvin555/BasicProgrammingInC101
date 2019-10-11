#include <stdio.h>
#include <math.h>

void calculate_root(float a, float b, float c){
    float d, root1, root2;
    d = b * b - 4 * a * c;
    if(d==0){    
        root1 = -b /(2* a);
        printf("The roots are x1=x2=%.3f ",root1);
    }
    else if(d>0){    
        root1 = ( -b - sqrt(d)) / (2* a);
        root2 = ( -b + sqrt(d)) / (2* a);
        printf("The roots are: x1=%.3f , x2=%.3f",root1,root2);
    }
    else if(d < 0){
        printf("No solution");
    }
}

void main(){
  float a,b,c;
  float d,root1,root2; 
  printf("Please enter the a, b and c coefficient of quadratic equation: \n");
  printf("A : ");
  scanf("%f",&a);
  printf("B : ");
  scanf("%f",&b);
  printf("C : ");
  scanf("%f",&c);
  calculate_root(a,b,c);

  getch();
}