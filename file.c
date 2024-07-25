#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("FILE.txt","r");
    int n;
    fscanf(ptr, "%d",&n);
    printf("%d \t",n);
    fscanf(ptr, "%d",&n);
    printf("%d \t",n);
    fscanf(ptr, "%d",&n);
    printf("%d \t",n);
    fscanf(ptr, "%d",&n);
    printf("%d \t",n);
    fscanf(ptr, "%d",&n);
    printf("%d \t",n);
    
    printf("\n");
    fclose(ptr);
    return 0;
}