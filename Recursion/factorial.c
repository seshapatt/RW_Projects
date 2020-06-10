#include<stdio.h>
#include<conio.h>


int factorial(int n,int a) // 5 4 3 2 1
{
    if(n==0 || n==1)
    {
        printf("%d",a);
        return;
    }
    a=a*n*(n-1);
    n=(n-1);
    n--;
    factorial(n,a);
    return ;
}

int main()
{
    int n,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial(n,a);
}
