#include<stdio.h>
struct vector{
    int x;
    int y;
};
void vectorSum(struct vector v1,struct vector v2, struct vector sum);
int main(){
    struct vector v1,v2;
    struct vector sum = {0};

    printf("Enter the components of i and j of vector1 : \n");
    scanf("%d %d",&v1.x,&v1.y);
    printf("Enter the components of i and j of vector2 : \n");
    scanf("%d %d",&v2.x,&v2.y);
    
    vectorSum(v1,v2,sum);
}
void vectorSum(struct vector v1,struct vector v2, struct vector sum){
    sum.x = v1.x+ v2.x;
    sum.y = v1.y +v2.y;
    printf("The sum of two vector is: %di + %dj \n", sum.x, sum.y);
}