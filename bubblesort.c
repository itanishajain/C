#include<stdio.h>
int main(){
    int a[20],n,i,j,b,c,temp;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Elements of an array are: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(b=0; b<n ; b++){
        for(c=0; c<n ; c++){
            if(a[c]>a[c+1]){
                temp = a[c];
                a[c]=a[c+1];
                a[c+1]=temp;
            }
        }
    }

    printf("Sorted Array \n");
    for(j=0; j<n; j++){
        printf("%d \t", a[j]);
    }
    printf("\n");
    return 0;
}
