#include<stdio.h>

int main(){
    int n,h,m,s;
    printf("Enter the value in seconds: ");
    scanf("%d", &n);

    h=n/3600;
    m=(n%3600)/60;
    s=((n%3600)%60);

    printf("%d : %d : %d",h, m, s);

    return 0;
}