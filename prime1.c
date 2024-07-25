// #include<stdio.h>
// int main(){
//     int j,range,i;
//     printf("Enter the range to find the prime number: \n");
//     scanf("%d", range);
//     for (i=0;i<=range;i++){
//         for()
//     }
// }
#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf ("Enter the range : ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
                break;
        }
        if(i==j){
            printf("%d\n",j);
        }
    }
    return 0;
}