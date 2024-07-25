#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[25], dept[10], designation[25];
    int sal, sno, phoneNo;
    struct node* llink;
    struct node* nlink;
};
typedef struct node* NODE;
NODE first = NULL;
int count = 0;

NODE create()
{
    NODE enode;
    enode = (NODE)malloc(sizeof(struct node));
    if (enode == NULL)
    {
        printf("\nRunning out of memory");
        exit(0);
    }
    printf("Enter the sno, Name, Department, Designation, Salary, PhoneNo of the employee: \n");
    scanf("%d %s %s %s %d %d", &enode->sno, enode->name, enode->dept, enode->designation, &enode->sal, &enode->phoneNo);
    enode->llink = NULL;
    enode->nlink = NULL;
    count++;
    return enode;
}

NODE insertfront()
{
    NODE temp;
    temp = create();
    if (first == NULL)
    {
        return temp;
    }
    temp->nlink = first;
    first->llink = temp;
    return temp;
}

void display()
{
    NODE cur;
    int nodeno = 1;
    cur = first;
    if (cur == NULL)
        printf("\nNo Contents to display in DLL");
    while (cur != NULL)
    {
        printf("\nENode:%d, SSO:%d, Name:%s, Department:%s, Designation:%s, Salary:%d, Phone no:%d", nodeno, cur->sno, cur->name, cur->dept, cur->designation, cur->sal, cur->phoneNo);
        cur = cur->nlink;
        nodeno++;
    }
    printf("\nNo of employee nodes is %d\n", count);
}

NODE deletefront()
{
    NODE temp;
    if (first == NULL)
    {
        printf("Doubly Linked List is empty\n");
        return NULL;
    }
    if (first->nlink == NULL)
    {
        printf("The employee node with the sno:%d is deleted\n", first->sno);
        free(first);
        count--;
        return NULL;
    }
    temp = first;
    first = first->nlink;
    temp->nlink = NULL;
    first->llink = NULL;
    printf("The employee node with the sno:%d is deleted\n", temp->sno);
    free(temp);
    count--;
    return first;
}

NODE insertend()
{
    NODE cur, temp;
    temp = create();
    if (first == NULL)
    {
        return temp;
    }
    cur = first;
    while (cur->nlink != NULL)
    {
        cur = cur->nlink;
    }
    cur->nlink = temp;
    temp->llink = cur;
    return first;
}

NODE deleteend()
{
    NODE prev, cur;
    if (first == NULL)
    {
        printf("Doubly Linked List is empty\n");
        return NULL;
    }
    if (first->nlink == NULL)
    {
        printf("The employee node with the sno:%d is deleted \n", first->sno);
        free(first);
        count--;
        return NULL;
    }
    prev = NULL;
    cur = first;
    while (cur->nlink != NULL)
    {
        prev = cur;
        cur = cur->nlink;
    }
    cur->llink = NULL;
    printf("\nThe employee node with the sno:%d is deleted", cur->sno);
    free(cur);
    if (prev != NULL)
    {
        prev->nlink = NULL;
    }
    count--;
    return first;
}

int main()
{
    int ch, i, n;
    while (1)
    {
        printf("\n1:Create DLL of Employee Nodes");
        printf("\n2:Display Status");
        printf("\n3:Insert At End");
        printf("\n4:Delete At End");
        printf("\n5:Insert At Front");
        printf("\n6:Delete At Front");
        printf("\n7:Exit \n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the no of Employees:   ");
            scanf("%d", &n);
            getchar(); // Clear the input buffer
            for (i = 1; i <= n; i++)
                first = insertend();
            break;
        case 2:
            display();
            break;
        case 3:
            first = insertend();
            break;
        case 4:
            first = deleteend();
            break;
        case 5:
            first = insertfront();
            break;
        case 6:
            first = deletefront();
            break;
        case 7:
            exit(0);
        default:
            printf("\nPlease Enter the valid choice");
        }
    }
    return 0;
}
