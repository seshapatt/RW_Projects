#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* getnewnode(int n)
{
    struct node * temp=(struct node*) malloc(sizeof(struct node));
    (*temp).data=n;
    (*temp).left=NULL;
    (*temp).right=NULL;
    return temp;
};


insert(struct node* head,int n)
{
    if(head==NULL)
    {
        return getnewnode(n);
    }
    if(n<head->data)
    {
        head->left=insert(head->left,n);
        return head;
    }
    if(n>head->data)
    {
        head->right=insert(head->right,n);
        return head;
    }
}

void print(struct node* head)
{
    if(head!=NULL)
    {
    print(head->left);
    printf("%d ",head->data);
    print(head->right);
    }
}

struct node* max(struct node* head)
{
    if(head==NULL)
    {
        return head;
    }
    max(head->right);
    return head;
}



int max_l(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maxDepth(struct node* head)
{
    if(head==NULL)
    {
        return -1;
    }
    int lheight=1+maxDepth(head->left);
    int rheight=1+maxDepth(head->right);
    return max_l(lheight,rheight);
}

search(struct node *head,int n)
{
    if(head->data==n)
    {

        printf("height of %d is %d\n",n,maxDepth(head));
        return;
    }
    if(n<head->data)
    {
        search(head->left,n);
        return;
    }
    else
    {
        search(head->right,n);
        return;
    }
}


int main()
{
    struct node* head=NULL; //4 6 7 9 11
    head=insert(head,20);
    insert(head,10);
    insert(head,30);
    insert(head,8);
    insert(head,11);
    insert(head,25);
    insert(head,40);
    insert(head,22);
    search(head,25);
    //printf("Height of a tree is %d\n",maxDepth(head));
    print(head);
}


