#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("This program is to check whether u passed ur exam or not");
    printf("\n\n");
    printf("enter marks of first subject: ");
    scanf("%d", a);
    printf("enter the marks of second subjet: ");
    scanf("%d", b);
    printf("enter the marks of third subject: ");
    scanf("%d", c);
    d=(a+b+c)/3;
    if (a>33 && b>33 && c>33 && d>40){
        printf("Result = PASS");
    }
    else{
        printf("Result=FAIL");
    }

    return 0;

}