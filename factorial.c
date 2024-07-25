#include<stdio.h>
//with recursion
// int fact(int n);

// int main(){
//     printf("factorial is: %d", fact(5));
//     return 0;
// }

// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factNm = fact(n-1);
//     int factN = factNm * n;
//     return factN;
// }


//without rrecursion
int main(){
    int n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for( int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("The factorial of number is: %d. \n", fact);
}