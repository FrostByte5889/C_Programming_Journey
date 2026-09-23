#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    a=a+b;
    b=a-b;
    a=(a-b);

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}