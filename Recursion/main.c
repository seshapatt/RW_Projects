#include<stdio.h>
#include<conio.h>

int add(int a,int count)
{
    int i,sum=0,b=0;
    for(i=0;i<count;i++)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    return sum;
}


int main()
{
    int sum,count=0;
    printf("Sum of digits\n");
    int a=12;
    int b=a;
    while(b!=0)
    {
        b=b/10;
        count+=1;
    }
    printf("Count is %d",count);
    sum=add(a,count);
    printf("\nSum is %d",sum);
}

