#include<stdio.h>
int main(){
    FILE *p;
    p = fopen("Sum.txt","r");
    int a,b;
    fscanf(p,"%d",&a);
    fscanf(p,"%d",&b);
    fclose(p);

    p=fopen("Sum.txt","w");
    fprintf(p,"%d",a+b);
    fclose(p);
    return 0;
}