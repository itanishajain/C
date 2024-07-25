#include<stdio.h>
#include<string.h>
void check(char str[], char c);
int main(){
    char str[20];
    char c;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("Enter the character to check: ");
    scanf("%s",&c);
    check(str,c);
    return 0;
}
void check(char str[], char c){
    for(int i =0; str[i]!='\0'; i++){
        if(str[i]==c){
            printf("The character is present \n");
            return;
        }
    }
    printf("Character is not present! \n");
}