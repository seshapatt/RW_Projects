#include<stdio.h>
#include<conio.h>
#include"D:\Projects\RW_Projects\General\BST\BST_main.h"

int depth_node(struct node* head,int n,int d)
{
    if(head==NULL)
    {
        printf("\nElement not found\n");
        return 1;
    }

    else if(n<head->data)
    {
        d=d+1;
        return depth_node(head->left,n,d);
    }

    else if(n>head->data)
    {
        d=d+1;
        return depth_node(head->right,n,d);
    }
    return d;
}

int main()
{
    int n,d=0;
    struct node *head=NULL;
    head=Insert(head,90);
    Insert(head,80);
    Insert(head,100);
    Insert(head,71);
    Insert(head,87);
    Insert(head,65);
    Insert(head,75);
    Insert(head,76);
    print_tree(head);
    int depth =depth_node(head,71,d);
    if(depth!=1)
    {
        printf("\nThe depth is %d",depth);
    }

}
