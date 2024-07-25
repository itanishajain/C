#include<stdio.h>
struct address{
    int hNO;
    int block;
    char city[10];
    char state[20];
};
void printAddress(struct address p);
int main(){
    struct address p[5];
    printf("Enter the details of 1 person: ");
    scanf("%d %d %s %s", &p[0].hNO,&p[0].block,p[0].city, p[0].state);
    printf("Enter the details of 2 person: ");
    scanf("%d %d %s %s", &p[1].hNO,&p[1].block,p[1].city, p[1].state);
    printf("Enter the details of 3 person: ");
    scanf("%d %d %s %s", &p[2].hNO,&p[2].block,p[2].city, p[2].state);
    printf("Enter the details of 4 person: ");
    scanf("%d %d %s %s", &p[3].hNO,&p[3].block,p[3].city, p[3].state);
    printf("Enter the details of 5 person: ");
    scanf("%d %d %s %s", &p[4].hNO,&p[4].block,p[4].city, p[4].state);

    printAddress(p[0]);
    printAddress(p[1]);
    printAddress(p[2]);
    printAddress(p[3]);
    printAddress(p[4]);
    return 0;

}
void printAddress(struct address p){
    printf("Address is: \t HouseNo \t block \t city \t state");
    printf("%d %d %s %s\n",p.hNO, p.block, p.city, p.state);
}