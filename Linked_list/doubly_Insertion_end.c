#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *prev;
    struct node*next;
};

struct node*head;

int main()
{
    head=NULL;
    printf("Doubly linked list Insertion at end\n");
    Insert(5);
    Insert(9);
    Insert(45);
    Insert(8);
    Print();
}

void Insert(int n)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    struct node *temp2=(struct node*) malloc(sizeof(struct node));
    if(head==NULL)
    {
        (*temp).data=n;
        (*temp).next=head;
        (*temp).prev=head;
        head=temp;
    }
    else
    {
        (*temp2).data=n;
        (*temp2).next=head;
        temp->prev=temp2;
        head=temp2;
    }

}

void Print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
