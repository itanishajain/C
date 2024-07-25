#include<stdio.h>

int square(int a);
int main(){
    int a =5;
    int c = square(a);
    printf("The square of the number a will be: %d \n",c);
    return 0;
}
int square(int a){
    a = a * a;
    return a;
}