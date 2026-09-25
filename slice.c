#include<stdio.h>

void slice(char s[], int, int);

int main(){
	char s[20];
	int m, n;
	printf("Enter the string_start_end values: ");
	scanf("%s %d %d", s, &m, &n);

	slice(s, m, n);

	printf("AFter slicing: %s\n", s);
	return 0;
}

void slice(char s[], int m, int n){
	for (int i=(m-1);i<n;i++){
		s[i-m+1]=s[i];
	}
	for (int i=(n-m+1);i<20;i++){
		s[i]='\0';
	}
}

