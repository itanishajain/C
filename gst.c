#include<stdio.h>
int main(){
    int cost[3];
    printf("Enter the price of first item : ");
    scanf("%d", &cost[0]);
    printf("Enter the price of second item : ");
    scanf("%d", &cost[1]);
    printf("Enter the price of third item : ");
    scanf("%d", &cost[2]);

    int total=cost[0]+cost[1]+cost[2];
    int gst=(total * 18)/100;
    int price = gst+total;
    printf("Total price is: %d \n", price);
    return 0;
}