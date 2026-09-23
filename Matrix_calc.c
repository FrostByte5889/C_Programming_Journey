#include<stdio.h>

int main(){
    int n,o1,o2,o3,o4,e;
    printf("Lets make pair of matrices!!\n");
    printf("Enter the order of first matrix: ");
    scanf("%d x %d", &o1, &o2);
    printf("Enter the order of second matrix: ");
    scanf("%d x %d", &o3, &o4);
    int M[o1][o2], N[o3][o4];
    for (int i=0;i<(o1);i++){
        for (int j=0;j<(o2);j++){
            printf("Enter (%d,%d)th element for first matrix: ",(i+1),(j+1));
            scanf("%d", &e);
            M[i][j]=e;
        }
    }
    for (int i=0;i<(o3);i++){
        for (int j=0;j<(o4);j++){
            printf("Enter the (%d,%d)th elements of second matrix: ",i,j);
            scanf("%d", &e);
            N[i][j]=e;
        }
    }

    printf("The matrices are :: \n");
    printf("The first matrix : \n");

    for (int i=0;i<(o1);i++){
        for (int j=0;j<(o2);j++){
            if (M[i][j]>=0){

                printf("| %d |", M[i][j]);
            }
            else {
                printf("|%d |", M[i][j]);
            }
        }
        printf("\n");
    }

    printf("The second matrix: \n");

    for (int i=0;i<(o3);i++){
        for (int j=0;j<(o4);j++){
            if (N[i][j]>=0){

                printf("| %d |", N[i][j]);
            }
            else {
                printf("|%d |", N[i][j]);
            }
        }
        printf("\n");
    }

    int z;
    int A[o1][o4];
    for (int i=0;i<o1;i++){
        for (int j=0;j<o4;j++){
            A[i][j]=0;
        }
    }

    int x=1;
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Exit \n");
    while (x>0){
        printf("\n\n\nEnter the command number : ");
        scanf("%d", &z);

        switch(z){
            case 1:{
                if (o1==o3 && o2==o4){
                    for (int i=0;i<o1;i++){
                        for (int j=0;j<o2;j++){
                            A[i][j]=M[i][j]+N[i][j];
                        }
                    }
                }
                else{
                    printf("Operation unsuccessful!!\n");
                    continue;
                }
                break;
            }
            case 2:{
                if (o1==o3 && o2==o4){
                    for (int i=0;i<=o1;i++){
                        for (int j=0;j<=o2;j++){
                            A[i][j]=M[i][j]-N[i][j];
                        }
                    }
                }
                else{
                    printf("Operation unsuccessful!!\n");
                    continue;
                }
                break;
            }
            case 3:{
                if (o2==o3){
                    for (int i=0;i<o1;i++){
                        for (int j=0;j<o4;j++){
                            for (int k=0;k<o2;k++){
                                A[i][j]+=(M[i][k]*N[k][j]);
                            }
                        }
                    }
                }
                else{
                    printf("Operation unsuccessful!!\n");
                    continue;
                }
                break;
            }

            case 4:{
                x=0;
                break;
            }
            default:{
                printf("Some error occured!!\n");
                break;
            }
            


        }
        printf("\n\n\nThe resultant matrix: \n");
        for (int i=0;i<o1;i++){
            for (int j=0;j<o4;j++){
                if (A[i][j]>=0){
                    printf("|%d|",A[i][j]);
                }
                else {
                    printf("|%d |", A[i][j]);
                }
            }
            printf("\n");
        }

    } 
    return 0;
}