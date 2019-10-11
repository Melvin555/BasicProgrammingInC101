#include <stdio.h>
#include <math.h>

int rec(int x)
{
	int i,rec=1;
	for(i=1;i<=x;i++)
		rec=rec*i;
	return rec;
}

void main(){
	float input,sum=0;
	int i,j,border=6;
	printf("Please input the value for sinusoidal taylor series: \n");
	scanf("%f",&input);
	
    i=1; j=1;  
	while(i<=border){
		if(i%2!=0){
			sum=sum+pow(input,j)/rec(j);
		}
		else
			sum=sum-pow(input,j)/rec(j);
        i++;
        j=j+2;
	}
	printf("Sin(%f) = %f",input,sum);
	
    getch();
}