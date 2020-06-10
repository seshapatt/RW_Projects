#include<stdio.h>
#include<conio.h>

int b[100],j=1;
int maxheap(int a[],int n,int i)
{
    if(i==1)
    {
        a[i]=n;
        return a;
    }

    a[i]=n;
    if(a[i]>a[i/2])
    {
        int temp=a[i/2];
        a[i/2]=a[i];
        a[i]=temp;
        maxheap(a,a[i/2],i/2);
    }

}

void Print(int a[],int i,int t)
{
    printf("The heap tree is\n");
    for(i=1;i<=t;i++)
    {
        printf("%d ",a[i]);
    }
}

void Printdel(int a[],int i,int t)
{
    for(i=1;i<=t-1;i++)
    {
        printf("%d ",a[i]);
    }
}

int Delete(int a[],int i,int t)
{
    i=1;
    b[j]=a[i];
    j++;

    a[i]=a[t];

    if(a[2*i]>a[2*i+1])
    {
       int temp=a[i];
       a[i]=a[2*i];
       a[2*i]=temp;
    }
    else
    {
       int temp=a[i];
       a[i]=a[2*i+1];
       a[2*i+1]=temp;
    }
    return a;
}

//Printing array from min to max heap sort
void PrintHMin(int b[],int i,int t)
{
    printf("\nHeap Sort in min order is \n");
    for(i=t;i>=1;i--)
    {
        printf("%d ",b[i]);
    }
}

//Printing array from max to min heap sort
void PrintHMax(int b[],int i,int t)
{
    printf("\nHeap Sort in max order is \n");
    for(i=1;i<=t;i++)
    {
        printf("%d ",b[i]);
    }
}

int main()
{
    int i,n,t,a[100];
    printf("Enter the number of elements in an array: ");
    scanf("%d",&t);
    printf("Enter the elements for the array\n");
   for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        maxheap(a,n,i);
    }
    Print(a,i,t);

printf("\n\nDeletion of head node/parent node");
// Loop for deleting and printing the deleted root/head elements
    for(i=1;i<=t;i++)
    {
        printf("\n");
        Delete(a,i,t-i+1);
        Printdel(a,i,t-i+1);
    }

/*  This can be used to print the deleted elements if the above condition is not used
    printf("\n");

    Delete(a,i,t);
    printf("\n");
    Printdel(a,i,t);

    Delete(a,i,t-1);
    printf("\n");
    Printdel(a,i,t-1);

    Delete(a,i,t-2);
    printf("\n");
    Printdel(a,i,t-2);

    Delete(a,i,t-3);
    printf("\n");
    Printdel(a,i,t-3);

    Delete(a,i,t-4);
    printf("\n");
    Printdel(a,i,t-4);*/

    PrintHMin(b,i,t);
    printf("\n");
    PrintHMax(b,i,t);
}
