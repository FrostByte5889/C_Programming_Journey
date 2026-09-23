#include<stdio.h>

int main(){
    int n, i, j;
    printf("enter no of lines in reverse pattern: ");
    scanf("%d", &n);

    for (i=n; i>0; i--){
        for (j=0; j<i; j++){
            printf("$ ");
        }
        printf("\n");

    }

    return 0;
}