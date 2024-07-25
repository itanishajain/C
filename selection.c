#include<stdio.h>
int main(){
    int a[20], n,i,j,k,min,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //selection sort
    for(j=0; j <n ; j++){
        min = j;
        for(k=j+1;k<n ; k++){
            if(a[k]< a[min]){
                min = k ;
            }
        }
        temp = a[min];
        a[min]=a[j];
        a[j]=temp;
    }
    printf("Sorted array.\n");
    for(i =0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}