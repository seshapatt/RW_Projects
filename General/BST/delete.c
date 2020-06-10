#include<stdio.h>
#include<conio.h>
#include"D:\Projects\RW_Projects\General\BST\BST_main.h"


struct node* findmin(struct node* head)
{
    while(head->right!=NULL)
    {
        head=head->right;
    }
    return head;
}

struct node* delete_node(struct node* head,int n)
{
    if(head==NULL)
    {
        printf("\nCannot be deleted\n");
        return 1;
    }
    else if(n<head->data)
    {
         head->left=delete_node(head->left,n);
         return head;

    }
    else if(n>head->data)
    {
        head->right=delete_node(head->right,n);
        return head;

    }

    else
    {
        if(head->left==NULL && head->right==NULL)
        {
            head=NULL;
            free(head);
            return head;
        }

        else if(head->left == NULL)
        {
            struct node* temp=head;
            head=head->right;
            temp=NULL;
            free(temp);
            return head;
        }

        else if(head->right == NULL)
        {
            struct node* temp=head;
            head=head->left;
            temp=NULL;
            free(temp);
            return head;
        }

        else
        {
            if(head->left!=NULL && head->right!=NULL)
            {
                struct node* temp=findmin(head->left);
                head->data=temp->data;
                head->left=delete_node(head->left,temp->data);
                return head;
            }
        }
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
    Insert(head,76);
    print_tree(head);
    printf("\nAfter deletion the tree is ");
    delete_node(head,80);
    print_tree(head);

}
