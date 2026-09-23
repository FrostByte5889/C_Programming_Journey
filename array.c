#include<stdio.h>

int main(){

	int arr[10], pos=0, neg=0, zero=0;
        
    for (int i=0;i<10;i++){
	     printf("Enter the number: ");
	     scanf("%d", &arr[i]);
	}

    for (int j=0;j<10;j++){
	     if (arr[j]>0){
		     pos++;
	    }
        else if (arr[j]<0){
		     neg++;
	    }
        else {
		     zero++;
	    }
    }
    printf("positive : %d \nnegative : %d \nzero : %d \n", pos, neg, zero);


	return 0;  
}