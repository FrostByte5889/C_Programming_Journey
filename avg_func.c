#include<stdio.h>

void avg(a,b,c);

int main(){
	int a, b, c;
	printf("Enter three numbers to find average: (eg. n1,n,n3)");
	scanf("%d,%d,%d", &a, &b, &c);

	a=avg(a,b,c);

	printf("The average of given numbers is : %d", a);


	return 0;
}
void avg(a,b,c){
	int c=(a+b+c)/3;
	return c;
}

