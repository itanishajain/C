#include<stdio.h>
void pattern();
int main(){
    int n;
    for(int i=0;i<4;i++){
        pattern();
        printf("\n");
    }
}
void pattern(){
    for(int i =0;i<5;i++){
        printf("*\t");
    }
}