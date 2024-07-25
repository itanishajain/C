#include<stdio.h>
void revArr(int Ar[], int n);
void printArr(int Ar[], int n);

int main(){
    int Ar[] = {1,2,3,4,5};
    revArr(Ar, 5);
    printArr(Ar,5);
    return 0;
}
void printArr(int Ar[], int n){
    for(int i=0 ; i<n; i++){
        printf("%d \t", Ar[i]);
    }
    printf("\n");
}

void revArr(int Ar[], int n ){
    for(int i =0; i<n/2; i++){
        int F = Ar[i];
        int S = Ar[n-i-1];
        Ar[i] = S;
        Ar[n-i-1] = F ;
    } 
}

