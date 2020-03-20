# include<stdio.h>
# include<conio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head;

int main()
{
    head=NULL;
    printf("Linked list insertion at the end\n");
    Insert_Last(9);
    Insert_Last(8);
    Insert_Last(4);
    Insert_Last(3);
    Insert_Last(2);
    Print();

}

/*Insert_First(int n)
{
    struct node* temp =(struct node*) malloc(sizeof(struct node));
    temp->data=n;
    temp->next=head;
    head=temp;
}*/

Insert_Last(int n)
{
    struct node* temp=head;
    struct node*temp2= (struct node*) malloc (sizeof(struct node));
    (*temp2).data=n;
    (*temp2).next=NULL;

    if(temp==NULL)
    {
        head=temp2;
        return;
    }

    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next =temp2;
}

Print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
