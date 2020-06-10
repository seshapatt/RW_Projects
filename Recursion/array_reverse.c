#include<stdio.h>
#include<conio.h>

void array_elements(int a[],int n,int count)    // 10 20 30 40 50
{
    if(n==0)
    {
        printf("No elements");
        return;
    }
    if(count==1)
    {
        printf("%d ",a[count-1]);
        return;
    }
    printf("%d ",a[count-1]);
    count--;
    array_elements(a,n,count);
    return;

}

int main()
{
    int n,count,a[10];
    printf("Enter a number: ");
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    array_elements(a,n,count);
}
