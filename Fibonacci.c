#include<stdio.h>

int fibo(int);

int main(){
    int n;
    printf("Enter the term number to find: ");
    scanf("%d", &n);
    printf("The number is : %d\n", fibo(n));

    return 0;
}

int fibo(int n){
    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}
