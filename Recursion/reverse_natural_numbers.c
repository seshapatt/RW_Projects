#include<stdio.h>
#include<conio.h>

void natural_numbers(int n)
{
    if(n==0)
    {
        return;
    }
    if(n==1)
    {
        printf("%d ",n);
        return;
    }
    printf("%d ",n);
    n=n-1;
    natural_numbers(n);
    return;
}

int main()
{
    int n;
    printf("Print first n natural numbers: ");
    printf("\nEnter a value for n: ");
    scanf("%d",&n);
    natural_numbers(n);
}
