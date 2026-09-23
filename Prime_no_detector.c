#include<stdio.h>

int main(){
    printf("Welcome to prime no detector.This is a demo that does the job for numbers from 1 to 1200.\n");
    int p;
    printf("enter the number: ");
    scanf("%d", &p);

    if (p==1){
        printf("1 is neither prime nor composite.");
    }

    else if (p==2 || p==3 || p==5 || p==7 || p==11 || p==13 || p==17 || p==19 || p==23 || p==29 || p==31 || p==37){
        printf("The number is prime number.");
    }

    else if (p%2!=0 && p%3!=0 && p%5!=0 && p%7!=0 && p%11!=0 && p%13!=0 && p%17!=0 && p%19!=0 && p%23!=0 && p%29!=0 && p%31!=0 && p%37!=0){
        printf("The number is prime number");
    }

    else {
        printf("It is composite number.");
    }

    p>=0 ? printf("The number is positive") : printf("The number is negative");
    
        return 0;
     
}

