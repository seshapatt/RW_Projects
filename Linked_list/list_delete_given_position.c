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
    printf("Linked list Deletion at given position\n");
    Insert_Last(9);
    Insert_Last(8);
    Insert_Last(4);
    Insert_Last(3);
    Print();
    printf("\nEnter the position to be deleted ");
    scanf("%d",&p);
    Delete_given(p);
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

Delete_given(int p)
{
    int i;
    struct node* temp=head;
    struct node* prev=NULL;
    if(p<=0 || p>4)
    {
        printf("Oops enter a valid number which is greater than 0 and less than 4\n");
    }
    if(p==1)
    {
        head=temp->next;
    }
    for(i=1;i<p;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
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
