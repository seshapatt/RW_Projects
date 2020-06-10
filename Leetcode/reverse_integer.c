#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

int counter(int n)
{
    int b,count=0;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
        count=count+1;
    }
    return count;
}


int main()
{
    int n,r=0,a,b,i=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int c=counter(n);
    while(i<c)
    {
        a=n%10;
        r=10*r+a;
        n=n/10;
        i++;
    }
    printf("r is %d",r);
}


