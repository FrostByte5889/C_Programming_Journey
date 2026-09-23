#include<stdio.h>

int main(){
    printf("The number of bytes in a char is: %zu\n", sizeof(char));
    printf("The number of bytes in a int is: %zu\n", sizeof(int));
    printf("The number of bytes in a float is: %zu\n", sizeof(float));
    printf("The number of bytes in a double is: %zu\n", sizeof(double));
 
    return 0;
}