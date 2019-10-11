#include <stdio.h>
#define ROUNDF(f, c) (((float)((int)((f) * (c))) / (c)))

void main (){
	float area,circumference,radius;
	printf("Please enter radius\n");
	scanf("%f",&radius);
	circumference=2*3.14*radius;
	area=3.14*radius*radius;
	printf("Circumference=%.1f area=%.1f\n",circumference,area);
	printf("Please press a button to finish.");
	getch();
}