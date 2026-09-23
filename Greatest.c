#include<stdio.h>

int main(){

    printf("This program is to find greatest no out of four entered number.\n");

    float a, b, c, d;

    printf("enter first no: ");
    scanf("%f", &a);
    printf("enter second no: ");
    scanf("%f", &b);
    printf("enter third no: ");
    scanf("%f", &c);
    printf("enter fourth no: ");
    scanf("%f", &d);

    if (a>b && a>c && a>d){
        printf("The greatest of all is: %0.2f", a);
    }

    else if (b>a && b>c && b>d){
        printf("The greatest of all is: %0.2f", b);
    }

    else if (c>a && c>b && c>d){
        printf("The greatest of all is: %0.2f", c);
    }

    else {
        printf("The greatest of all is: %0.2f", d);
    }


    return 0;
}