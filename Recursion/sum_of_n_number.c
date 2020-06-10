#include<stdio.h>
#include<conio.h>

void sum(int n,int a,int c)
{
    if(n==0)
    {
        printf("%d",n);
        return;
    }
    if(c==n)
    {
        printf("%d ",a);
        return;
    }
    c++;
    a=a+c;
    sum(n,a,c);
    return;
}

int main()
{
    int n,a=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,a,count);
}
