#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node* head;


struct node* insert_position(int n,int p)
{
    static int q=0;
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    struct node* temp2=head;

    if(head==NULL || p==1)
    {
        temp->data=n;
        temp->next=temp2;
        head=temp;
        q=q+1;
        return head;
    }

    else if(head!=NULL && p>0 && p<=q+1)
    {
        int i=1;
        for(i=1;i<p-1;i++)
        {
          temp2=temp2->next;
        }
        temp->data=n;
        temp->next=temp2->next;
        temp2->next=temp;
        q=q+1;
        return head;
    }
    else if(p>q)
    {
        printf("Please check the position entered\n");
    }
}

void print(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    printf("Enter the position greater than 0\n");
    insert_position(21,1);
    insert_position(25,2);
    insert_position(23,2);
    insert_position(27,4);
    insert_position(29,1);
    insert_position(31,7);

    printf("List is: ");
    print(head);
}
