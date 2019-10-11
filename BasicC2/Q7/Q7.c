#include <stdio.h>

void main(){
    printf("Input data please, one by one: \n");
    char data[20];
    int letter, blank, digit, other=0;
    for(int i=0; i<14; i++){
        scanf(" %c", &data[i]);
    }
    for(int i=0; i<14; i++){
        if(data[i]>='a' && data[i]<='z'){
            letter+=1;
        }
        else if(data[i]>='A' && data[i]<='Z'){
            letter+=1;
        }
        else if(data[i]>='0' && data[i]<='9'){
            digit+=1;
        }
        else if(data[i] == " "){
            blank+=1;
        }
        else
            other+=1;
    }
    printf("letter=%d; blank=%d; digit=%d; other=%d", letter, blank, digit, other);

    getch();
}