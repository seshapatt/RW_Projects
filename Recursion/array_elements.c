#include<stdio.h>
#include<conio.h>

void array_elements(int a[],int n,int count)
{
    if(n==0)
    {
        printf("No elements");
        return;
    }
    if(count==n-1)
    {
        printf("%d ",a[count]);
        return;
    }
    printf("%d ",a[count]);
    count++;
    array_elements(a,n,count);
    return;
}

int main()
{
    int n,count=0,a[10];
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    array_elements(a,n,count);
}
