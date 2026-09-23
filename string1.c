#include<stdio.h>
#include<string.h>

int main(){
    char s1[20], s2[20];
    printf("Enter a string:");
    fgets(s1, sizeof(s1), stdin);
    for (int i=0;i<=strlen(s1);i++){
        if (s1[i]=='\n'){
            s1[i]='\0';
        }
    }
    printf("Enter the same string but char by char!!\n");
    for (int i=0;i<strlen(s1);i++){
        char e;
        printf("Enter a character: ");
        scanf(" %c", &e);
        s2[i]=e;         
    }

    s2[strlen(s1)]='\0';

    if (strcmp(s1,s2)==0){
        printf("They are same!!");
    }
    else{
        printf("They are not same!!");
    }
    return 0;

}