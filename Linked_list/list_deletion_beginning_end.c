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
    printf("Linked list deletion at the beginning and end\n");
    Insert_Last(9);
    Insert_Last(8);
    Insert_Last(4);
    Insert_Last(3);
    Insert_Last(2);
    Print();
    printf("\nFirst element deletion ");
    Print();
    Delete_First();
    printf("\nLast element deletion ");
    Delete_Last();
    Print();

}

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


Delete_First()
{
 struct node* temp=head;
 head=temp->next;
 free(temp);
}

Delete_Last()
{
    struct node* temp =head;
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);

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
