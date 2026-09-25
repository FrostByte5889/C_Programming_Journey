#include<stdio.h>

int main(){
    int n;
    printf("Enter the upper limit(>=2): ");
    scanf("%d", &n);

   
    int sum=0;
    int cout=0;
    for (int i=2;i<n;i++){
        int count=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                count++;
            }
            else {
                continue;
            }

        }
        if (count==0){
            printf("%d\n", i);
            sum+=i;
            cout+=1;
        }
        else{
            continue;
        }
    }

    printf("The sum of prime numbers are: %d\nThe number of prime numbers found is: %d\n", sum, cout);

    return 0;
}