#include<stdio.h>

int stringlen(char s[], int);

int main(){
	char s[25];
	printf("Enter a string to find its length: ");
	scanf("%s", s);
	printf("The length of entered string is : %d\n", stringlen(s, 250));
	return 0;
}


int stringlen(char s[], int n){
	int count=0;
	for (int i=0;i<n;i++){
		if (s[i]=='\0'){
			break;
		}
		else{
			count++;
		}
		
	}
	return count;
}
