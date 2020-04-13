//delete frnt
//delete end
//heap
#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head;

int main()
{
    head=NULL;
    printf("Deletion of the first number\n");
    Insert(5);
    Insert(7);
    Insert(8);
    Print();
    Delete();
    printf("\n");
    Print();
}

void Insert(int n)
{
    struct node* temp =(struct node *) malloc(sizeof(struct node));
    (*temp).data=n;
    (*temp).prev=head;
    (*temp).next=head;
    head=temp;
}

void Delete()
{
    struct node* temp=head;
    head=temp->next;
    temp->prev=NULL;
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
