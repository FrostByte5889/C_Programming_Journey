#include<stdio.h>

int factorial(int n);

int main(){
    while (1){
        int n , result;
        
        printf("Enter '-2664' to exit the program !!\n");
        printf("Enter a number to find its factorial: ");
        scanf("%d", &n);
        if (n==-2664){
            break;
        }
        else if (n<0){
            factorial(n);
        }
        else{
            result = factorial(n);
            printf("The factorial of %d is: %d\n", n, result);
        }
    }

    return 0;
}

int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    else if(n<0){
        printf("Factorial for negative number is not defined!!\n");
        return -1;
    }
    else{
        return n*factorial(n-1);
    }
}