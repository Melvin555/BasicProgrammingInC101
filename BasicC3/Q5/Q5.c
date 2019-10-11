#include"stdio.h"
#include"stdlib.h"
 
int test1(int number, int a[20]){
    int s = 0, i, k = 0;
    for (i = 2; i < number; i++){
        if (number%i == 0){
            a[k] = i;
            k++;
            s = s + i;
        }
    }
    if (s == number-1)
        return (k);
    else 
        return(0);
}

void main(){
    int num, i, k, j, a[20];
    printf("input the range;\n");
    scanf("%d", &num);
    for (i = num; i>0; i--){
        k = test1(i, a);
        if (k > 0){
            printf("%d=1", i);
            for (j = 0; j < k; j++)
                printf("+%d", a[j]);
            printf("\n");
        }
    }
    system("pause");
}