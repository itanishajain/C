#include<stdio.h>
void temp(int t);
int main(){
    int t;
    printf("Enter the temperature: ");
    scanf("%d", &t);
    temp(t);
    return 0;
}
void temp(int t){
    if(t >= 25){
        printf("The temperature is Hot \n");
    }
    else{
        printf("The temperature is Cold \n");
    }
}