#include<stdio.h>
#include<conio.h>


void natural_numbers(int n,int a)
{
    if(n==0)
    {
        return;
    }
    if(a==n)
    {
        printf("%d ",a);
        return;
    }
    printf("%d ",a);
    a=a+1;
    natural_numbers(n,a);
    return 0;
}

int main()
{
    int n,a=1;;
    printf("Print first n natural numbers: ");
    printf("\nEnter a value for n: ");
    scanf("%d",&n);
    natural_numbers(n,a);
}
