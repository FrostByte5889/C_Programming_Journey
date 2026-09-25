#include<stdio.h>
#include<stdbool.h>

int main(){

    int n;
    int sum=0,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("List of prime numbers: \n");
    for (int i=2;i<=n;i++){
        bool flag=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag=1;
                break;
            }
            
        }
        if (flag==0){
            sum+=i;
            count++;
            printf("%d\n", i);
        }
        
    }
    printf("Sum: %d\nCount: %d\n", sum, count);
    return 0;
}