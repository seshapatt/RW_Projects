#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int main()
{
    int i,n,t;
    head=NULL;
    printf("Enter the number of terms\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Enter the %d number ",i);
        scanf("%d",&n);
        Insert(n);
    }
    Print();
}

void Insert(int n)
{
    struct node *temp= (struct node*) malloc(sizeof(struct node));
    (*temp).data = n;
    (*temp).next = head;
    head = temp;
}

void Print()
{
    struct node *temp = head;
    printf("The new list is \n");
    while(temp!= NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }
}
