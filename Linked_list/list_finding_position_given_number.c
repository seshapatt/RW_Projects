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
    printf("\nEnter a number to find its position in the list ");
    scanf("%d",&n);
    Position_Finder(n);
    printf("\n");
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

Position_Finder(int n)
{
    struct node* temp= head;
    int position=1;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            printf("Element is found at position %d ",position);
            return;
        }
        temp=(*temp).next;
        position++;
    }
    printf("Number not found");
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
