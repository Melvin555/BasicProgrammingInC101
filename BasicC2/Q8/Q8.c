#include <stdio.h>

void main(){
    int score, n;
    int A, B, C, D;
    A=B=C=D=0;
    printf("Please provide the number of input: \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Insert a score (0-100): ");
        scanf("%d", &score);
        switch (score/10)
        {
            case 10:
                A+=1;
                break;
            case 9:
                A+=1;
                break;
            case 8:
                B+=1;
                break;
            case 7:
                C+=1;
                break;
            default:
                D+=1;
                break;
        }
    }
    printf("A=%d ; B=%d ; C=%d ; D=%d",A,B,C,D);

    getch();
}