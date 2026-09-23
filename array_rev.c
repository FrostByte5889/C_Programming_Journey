#include<stdio.h>

int print_arr(int a[], int);
void arr_rev(int a[], int);

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        int e;
        printf("Enter an element: ");
        scanf("%d", &e);
        arr[i]=e;
    }
    print_arr(arr, n);
    printf("\n\n");
    arr_rev(arr, n);
    printf("After reversing: \n\n");
    print_arr(arr, n);

    return 0;
}

int print_arr(int a[], int s){
    for (int i=0;i<s;i++){
        printf("%d ", a[i]);
    }
}
void arr_rev(int a[], int s){
    int start=0, end=(s-1);
    while (start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}