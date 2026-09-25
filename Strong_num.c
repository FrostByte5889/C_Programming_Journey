#include<stdio.h>

int fact(int);

int main(){
    int l, p, count=0;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &p);
    printf("The number of strong numbers are: \n");
    for (int i=l;i<=p;i++){
        int sum=0;
        
        for (int j=i;j>0;j/=10){
            int digit=j%10;
            sum+=fact(digit);
        }
        if (i==sum){
            printf("%d\n", i);
            count++;
        }
        else {
            continue;
        }

    }

    printf("The number of strong numbers are: %d\n", count);

    return 0;
}

int fact(int n){
    int res=1;
    for (int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}