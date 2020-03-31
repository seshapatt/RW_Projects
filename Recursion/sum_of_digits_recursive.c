#include<stdio.h>
#include<conio.h>

int recursion_add(int a,int c,int sum1)
{
    if(a==0)
    {
        return sum1;
    }
    c=a%10;
    sum1=sum1+c;
    a=a/10;
    return recursion_add(a,c,sum1);
}

int main()
{
    int sum,c=0,sum1=0;
    printf("Sum of digits\n");
    int a=123456789;
    int b=a;
    sum=recursion_add(a,c,sum1);
    printf("Sum is %d",sum);
}

