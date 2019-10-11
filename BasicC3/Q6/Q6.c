#include<stdio.h>

int check_prime(int x){     
    int i;     
    for(i=2;i<=x-1;i++)
        if(x%i==0)             
            return 0;         
    return 1;
}

void check_even(int x){     
    int i;     
    for(i=2;i<=x-1;i++)         
        if(check_prime(i)&&check_prime(x-i)){    
            printf("The solution is %d=%d+%d\n",x,i,x-i);
            break;
        }
}

void main(){   
    int num;
    printf("Please input the even number >6: \n");     
    scanf("%d",&num);     
    if(num%2==0)         
        check_even(num);
    
    system("pause");
}
 