#include<stdio.h>
#include<math.h>

int main(){
	float a;
	printf("Enter the side length : ");
	scanf("%f", &a);
	float area;
	area=pow(a,2);
	printf("The area of given square is: %0.2f\n\n ", area);


	return 0;
}
