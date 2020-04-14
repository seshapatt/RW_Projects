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
    printf("Deletion of the last number\n");
    Insert(8);
    Insert(7);
    Insert(5);
    Insert(9);
    Insert(15);
    Print();
    Delete();
    printf("\n");
    Print();
    Delete();
    printf("\n");
    Print();
    Delete();
    printf("\n");
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
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;

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
