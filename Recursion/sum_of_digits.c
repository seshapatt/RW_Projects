#include<stdio.h>
#include<conio.h>

void sum(int n,int count) //59
{
    if(n==0)
    {
        printf("%d",count);
        return;
    }
    int r=n%10;
    count=count+r;
    n=n/10;
    sum(n,count);
    return;

}


int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,count);
}
