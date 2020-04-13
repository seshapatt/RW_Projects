#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

struct node *head;


int main()
{
    head=NULL;
    printf("Doubly linked list Insertion at front\n");
    Insert(5);
    Insert(7);
    Insert(10);
    Insert(88);
    Insert(55);
    Print();
}

void Insert(int n)
{
    struct node * temp=(struct node *) malloc(sizeof(struct node));
    (*temp).data=n;
    (*temp).prev=head;
    (*temp).next=head;
    head=temp;
}

void Print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
