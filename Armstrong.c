#include<stdio.h>

int main(){
    int l, u;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);

    printf("\nThe armstrong numbers are: \n");
    int cout=0;
    for (int i=l;i<=u;i++){
        int count=0, sum=0;
        for(int j=i;j>0;j/=10){
            count+=1;
        }

        for (int j=i;j>0;j/=10){
            int dummy=1;
            int digit=j%10;
            for (int k=0;k<count;k++){
                dummy*=digit;
                
            }
            sum+=dummy;
        }
        if (i==sum){
            printf("%d\n", i);
            cout+=1;
        }
    }
    printf("\nThe number of armstrong numbers are: %d\n", cout);
    return 0;

}