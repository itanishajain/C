#include<stdio.h>
int main(){
    int a[0],n,i,j,k,key,c;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(j=0; j<n ; j++){
        key = a[j];
        k=j-1;
        while(k>=0 && a[k]>key){
            a[k+1] = a[k];
            k = k-1;
        }
        a[k+1]=key;
    }
    printf("Sorted array.\n");
    for(c=0; c<n ;c++){
        printf("%d\t", a[c]);
    }
    printf("\n");
    return 0;
}