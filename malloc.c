#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,i;
    p = (int *)calloc(5, sizeof(int));
    printf("Enter 5 odd numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &p[i]);
    }

    p = realloc(p,11);
     printf("Enter 6 even numbers: ");
    for (i = 5; i < 11; i++) {
        scanf("%d", &p[i]);
    }
    printf("Numbers entered: ");
    for (i = 0; i < 11; i++) { 
        printf("%d\t", p[i]);
    }
    free(p);
}