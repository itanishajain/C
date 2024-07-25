#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *newnode(int data){
    struct node *T = (struct node *)malloc(sizeof(struct node));
    T->data = data;
    T->right = T->left = NULL;
    return T;
}

struct node *create(struct node *head, int data){
    if(head == NULL){
        head = newnode(data);
        return head;
    }
    else if (data < head->data){
        head->left = create(head->left, data);
    }
    else if (data > head->data){
        head->right = create(head->right, data);
    }
    return head;
}

void inorder(struct node *head){
    if(head != NULL){
        inorder(head->left);
        printf("%d\t", head->data);
        inorder(head->right);
    }
}

void preorder(struct node *head){
    if(head != NULL){
        printf("%d\t", head->data);
        preorder(head->left);
        preorder(head->right);
    }
}

void postorder(struct node *head){
    if (head != NULL){
        postorder(head->left);
        postorder(head->right);
        printf("%d\t", head->data);
    }
}

int main(){
    struct node *head = NULL;
    head = create(head, 10);
    head = create(head, 30);
    head = create(head, 9);
    head = create(head,20);

    printf("Inorder traversal:\n");
    inorder(head);
    printf("\n");

    printf("Preorder traversal:\n");
    preorder(head);
    printf("\n");

    printf("Postorder traversal:\n");
    postorder(head);
    printf("\n");

    return 0;
}