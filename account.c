#include<stdio.h>
typedef struct account
{
    int sNo;
    char name[10];
    int accNo;
} acc;
int main(){
    acc c1,c2;
    printf("Enter the details of customer 1: ");
    scanf("%d %s %d",&c1.sNo,c1.name,&c1.accNo);
    printf("Enter the details of customer 2: ");
    scanf("%d %s %d",&c2.sNo,c2.name,&c2.accNo);

    printf("Sno: %d, Name: %s, Account-number: %d\n", c1.sNo,c1.name,c1.accNo);
    printf("Sno: %d, Name: %s, Account-number: %d\n", c2.sNo,c2.name,c2.accNo);
    return 0;
}
