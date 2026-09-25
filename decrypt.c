#include<stdio.h>

void decrypt(char a[], int);

int main(){
	int n;
	printf("Enter the number of units u want: ");
	scanf("%d", &n);
	getchar();
        char a[n+1];
	printf("Enter the code: ");
	fgets(a, n+1, stdin);
	decrypt(a, n+1);

	return 0;
}

void decrypt(char a[], int n){
	int number=0;
        printf("The meaning of code is: \n");	
	for (int i=0;i<=n;i++){
		if (a[i]=='\0'){
			printf("%c", (number-1));
			break;
		}
		else if (a[i]=='\n' || a[i]==':'){
			printf("%c", (number-1));
			number=0;
			continue;
		}
		else if (a[i]=='_'){
			printf(" ");
		}
		else {

			if (a[i]==' '){
				printf("%c", (number-1));
				number=0;
			}
			else {
				int digit=a[i]-'0';
				number=number*10+digit;
			}
		}
	}
	printf("\n");
}

