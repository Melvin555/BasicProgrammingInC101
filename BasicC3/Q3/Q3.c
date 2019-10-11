#include <stdio.h>

void main(){
    int n, array[10],temp,odd=1;
    printf("Please insert the n number: ");
    scanf("%d", &n);
    for(int i=0;i<5;i++){
        printf("Please insert the integer number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i=0;i<5;i++){
        if(array[i]%2 != 0){
            temp = array[i];
            if(temp>odd){
                odd = temp;
            }
        }
    }
    printf("The largest odd number is: %d", odd);
    system("pause");
}








