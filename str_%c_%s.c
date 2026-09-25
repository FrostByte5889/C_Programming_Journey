#include<stdio.h>
#include<string.h>

int main(){
	char s1[20], s2[20];
	printf("Enter the string:");
	scanf("%s", s1);
	printf("Enter the same string again please: ");
	for (int i=0;i<strlen(s1);i++){
		scanf(" %c", &s2[i]);
	}
	for (int i=0;i<sizeof(s2);i++){
		if (s2[i]=='\n'){
			s2[i]='\0';
		}
	}
	if (strcmp(s1, s2)==0){
		printf("The two strings are same!!\n");
	}
	else{
		printf("The two strings are not same!!\n");
	}

	return 0;

}


