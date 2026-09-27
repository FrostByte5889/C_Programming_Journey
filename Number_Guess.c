#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int number_generate();

int main(){

	srand(time(NULL));

	printf("========================================\n");
	printf("            Number Guess Game           \n");
	printf("========================================\n");
    printf("-------Enter 1 to run the game---------\n");
	printf("-------Enter -2 to exit the game-------\n\n");
	int c;
	int n;
	printf("-------------------------------------------------------------\n");
	printf("Context: You have to guess a number between 1 and 100.\nIf your guess is same as what the game expects then u won\nThe number of tries matter!!\n");
	printf("-------------------------------------------------------------\n\n");
	while (1){
		printf("Enter a command: ");
		scanf("%d", &c);
		if (c==-2){
			printf("========================================\n");
			printf("             Closing the Game           \n");
			printf("========================================\n\n");
			break;
		}
		else if(c==1){
			int attempt=1;
			int g=number_generate();
		    printf("------------------------------------------------------------\n");
		    printf("|   Guess the number               : ");
		    scanf("%d", &n);
		    while (1){
			    if (n>g){
				    printf("|   Try a smaller one              : ");
				    scanf("%d", &n);
					attempt++;
			    }
				else if(n==g){
					printf("|   Hurry!! You got it correct!!\n");
					printf("|   You got it correct in %d attempts!\n\n", attempt);
					break;
				}
				else {
					printf("|   Try a bigger number            : ");
					scanf("%d", &n);
					attempt++;
				}
		    }
		}
		else {
			printf("Please enter a valid command!!\n");
		}
		printf("------------------------------------------------------------\n\n");

	}
	return 0;
}

int number_generate(){
	return rand()%100+1;
}

