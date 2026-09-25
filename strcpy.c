#include<stdio.h>

void strcopy(char a[], int, char b[]);

int main(){
	int n;
	printf("Enter the number of characters in your array: ");
	scanf("%d", &n);
	char a[n],b[n];
	printf("enter a string: ");
	scanf("%s", a);
	strcopy(a, n, b);
	printf("a= %s\nb=%s\n", a, b);

	return 0;
}


void strcopy(char a[], int n, char b[]){
	for (int i=0;i<n;i++){
		a[i]=b[i];
	}
}
