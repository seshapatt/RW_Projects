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
    int n,p;
    head=NULL;
    printf("Linked list Insertion at given position\n");
    Insert_Last(9);
    Insert_Last(8);
    Insert_Last(4);
    Insert_Last(2);
    Print();
    printf("\nEnter the position to be inserted ");
    scanf("%d",&p);
    printf("Enter the number to be inserted ");
    scanf("%d",&n);
    Insert_given(n,p);
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

Insert_given(int n,int p)
{
    int i;
    struct node* temp =head;
    struct node *temp2= (struct node*) malloc(sizeof(struct node));
    temp2->data=n;
    if(p<=0)
    {
        printf("\nsorry enter a valid number\n");
        return;
    }
    if(p==1)
    {
        temp2->next=temp;
        head=temp2;
        return;
    }
    for(i=0;i<p-2;i++)
    {
        temp=temp->next;
    }
    temp2->next=temp->next;
    temp->next=temp2;
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
