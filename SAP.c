#include<stdio.h>
void SAP(int *sum,int *product,int *average);

int main(){
    int sum , product , average;
    SAP(&sum, &product, &average);
    printf("Sum = %d \n", sum);
    printf("Product = %d \n", product);
    printf("Average = %d \n", average);
    return 0;
}

void SAP(int *sum,int *product,int *average){
    int a,b;
    printf("Enter the value of first number: ");
    scanf ("%d", &a);
    printf("Enter the value of second number: ");
    scanf ("%d", &b);
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}