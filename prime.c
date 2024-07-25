#include<stdio.h>
int main(){
    int n ,i,f=0;
    printf("Enter the number to check: \n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            f=1;   
        }
    }
    if(f==0){
        printf("%d is prime number.\n",n);
    } else{
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}