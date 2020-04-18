#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int n)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    (*temp).data=n;
    (*temp).left=NULL;
    (*temp).right=NULL;
    return temp;
}

struct node* insert(struct node* head,int n)
{
    if(head==NULL)
    {
        return newnode(n);
    }
    else if(n<head->data)
    {
        head->left=insert(head->left,n);
    }
    else if(n>head->data)
    {
        head->right=insert(head->right,n);
    }
}

void print(struct node* head)
{
    if(head!=NULL)
    {
        print(head->left);
        printf("%d\n",head->data);
        print(head->right);
    }
}

void search(struct node* head,int n)
{
    if(head!=NULL)
    {
        search(head->left,n);

        if(head->data==n)
        {
            printf("Found");
            return;
        }

        search(head->right,n);
    }
}

void minimum(struct node * head)
{
    while(head->left!=NULL)
    {
        head=head->left;
    }
    printf("\nThe minimum value is %d",head->data);
}

void maximum(struct node * head)
{
    while(head->right!=NULL)
    {
        head=head->right;
    }
    printf("\nThe maximum value is %d",head->data);
}

int counter=0;

int main()
{
    struct node* head=NULL;
    head=insert(head,50);
    insert(head,30);
    insert(head,20);
    insert(head,70);
    insert(head,40);
    insert(head,80);
    insert(head,60);
    insert(head,90);
    print(head);
    search(head,60);
    minimum(head);
    maximum(head);
}
