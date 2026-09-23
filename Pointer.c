#include<stdio.h>

void ten_times(int*);

int main(){
    int n, *p;
    printf("Enter the number : ");
    scanf("%d", &n);
    p=&n;
    ten_times(p);
    printf("After changing: %d\n", n);

    return 0;
}

void ten_times(int *n){
     *n=(*n)*10;
}