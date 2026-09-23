#include<stdio.h>

int main(){
    printf("This program is to check whether the character is lowercase or uppercase: \n");

    char c;
    printf("enter the character: ");
    scanf("%c", &c);

    if (c>='a' && c<='z'){
        printf("The character is in lowercase.");
    }

    else if (c>='A' && c<='Z'){
        printf("The character is in uppercase.");
    }

    else {
        printf("The entered character is not an alphabet.");
        
    }

    return 0;
}
