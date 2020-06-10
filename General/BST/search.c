#include<stdio.h>
#include<conio.h>
#include"D:\Projects\RW_Projects\General\BST\BST_main.h"

search(struct node* head,int n)
{
    if(head==NULL)
    {
        printf("Number not found");
        return 1;
    }
    else if(n<head->data)
    {
        return search(head->left,n);
    }
    else if(n>head->data)
    {
        return search(head->right,n);
    }
    else
    {
        return head->data;
    }
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
    printf("\nSearch a node in BST\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    int s=search(head,n);
    if(s!=1)
    {
        printf("Number %d is found",s);
    }

}
