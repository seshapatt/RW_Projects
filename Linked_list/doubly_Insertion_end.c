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
    printf("Doubly linked list insertion at the end\n");
    Insert(9);
    Insert(8);
    Insert(4);
    Insert(32);
    Print();
}

void Insert(int n)
{
    struct node* temp=head;
    struct node* temp2 = (struct node*) malloc(sizeof(struct node));
    if(head==NULL)
    {
        temp2->prev=NULL;
        temp2->data=n;
        (*temp2).next=NULL;
        head=temp2;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    (*temp2).data=n;
    (*temp2).prev=head;
    (*temp2).next=NULL;
    (*temp).next=temp2;

}

void Print()
{
    struct node* temp= head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
