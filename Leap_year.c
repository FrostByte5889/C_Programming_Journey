#include<stdio.h>

int main(){
    printf("This is a simple program to check whether a year is leap or not.\n");

    int y;

    printf("enter the year for checking: ");
    scanf("%d", &y);

    if (y%4==0){
        printf("The year is leap year.");
    }

    else {
        printf("This is not leap year.");
    }

    return 0;
}