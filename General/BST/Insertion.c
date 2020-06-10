#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int n)
{
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    (*temp).data=n;
    (*temp).left=(*temp).right=NULL;
    return temp;
}

struct node *Insert(struct node* head,int n)
{
    if(head==NULL)
    {
        return newnode(n);
    }

    else if(n<head->data)
    {
        head->left=Insert(head->left,n);
        return head;
    }

    else if(n>head->data)
    {
        head->right=Insert(head->right,n);
        return head;
    }
}

void print_tree(struct node* head)
{
    if(head!=NULL)
    {
        print_tree(head->left);
        printf(" %d ",head->data);
        print_tree(head->right);
    }
}

int main()
{
    struct node* head=NULL;
    printf("Insertion in BST\n");
    head=Insert(head,90);
    Insert(head,80);
    Insert(head,75);
    printf("The tree is");
    print_tree(head);
}

