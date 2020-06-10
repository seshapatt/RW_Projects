#include<stdio.h>
#include<conio.h>
#include"D:\Projects\RW_Projects\General\BST\BST_main.h"

int min(struct node* head)
{
    while(head->left!=NULL)
    {
        head=head->left;
    }
    return head->data;
}

int max(struct node* head)
{
    while(head->right!=NULL)
    {
        head=head->right;
    }
    return head->data;
}

int main()
{
    int n;
    struct node *head=NULL;
    head=Insert(head,90);
    Insert(head,80);
    Insert(head,100);
    Insert(head,71);
    Insert(head,87);
    Insert(head,65);
    Insert(head,75);
    print_tree(head);
    int mi=min(head);
    printf("\nMinimum number is %d",mi);
    int ma=max(head);
    printf("\nMaximum number is %d",ma);

}
