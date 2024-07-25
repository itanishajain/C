#include<stdio.h>
int main(){
    int a =0, b=1,c,i,n;
    printf("Enter the range: \n");
    scanf("%d",&n);
    printf("Fabonacci %d\t%d\t",a,b);
    for(i=2;i<n;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}