#include<stdio.h>

void encrypt(char s[], int);

int main(){
	int n;
	printf("Print the number of typing space u need: ");
	scanf("%d", &n);
	char s[n+1];
	printf("Enter a sentence or string: ");
	getchar();
	fgets(s, (n+1), stdin);
	printf("The encrypted code is: \n");
	encrypt(s, (n+1));
	printf("\n");

	return 0;
}

void encrypt(char s[], int n){
	for (int i=0;i<n;i++){
		if (s[i]=='\n'){
			printf(":");
		}
	        else if (s[i]==' '){
		        printf("_");
	        }
		else if (s[i]=='\0'){
			break;
		}
		else{
			printf("%d ", ((int)s[i])+1);
		}
	}
}	
