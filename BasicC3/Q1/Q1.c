#include<stdio.h>

int fun(int a){
  int b,c,s;
  b=a; s=0; 
  while (b) { c=b%10; b/=10; s+=c*c*c; }
  if (s==a) 
    return 1; 
  else 
    return 0;
}

void main(){
  int m,n,i;
  printf("Please insert two numbers, m and n = \n");
  scanf("%d%d",&m,&n);
  for ( i=m;i<=n;i++ ) 
    if ( fun(i) ) 
      printf("%d ",i);
  printf("\n");
  system("pause");
}