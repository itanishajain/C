#include<stdio.h>
int main(){
    FILE *p;
    p = fopen ("Odd.txt", "w");
    int i,n ;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        if(i%2 != 0){
            fprintf(p,"%d \t",i);
        }
    }
    printf("Numbers are written in file");
    printf("\n");
    fclose(p);
    return 0;
}