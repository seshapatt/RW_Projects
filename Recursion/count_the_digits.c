#include<stdio.h>
#include<conio.h>

counter(int n,int count) //0 59
{
    if(n/10==0)
    {
        printf("%d",count+1);
        return;
    }
    if(n==0)
    {
        printf("%d ",count);
        return;
    }
    count=count+1;
    n=n/10;
    counter(n,count);
    return;

}


int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    counter(n,count);
}
