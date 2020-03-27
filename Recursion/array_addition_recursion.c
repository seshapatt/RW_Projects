#include<stdio.h>
#include<conio.h>

int main()
{
    int s,b=0,count=0;
    int a[]={5,6,7,8,9,10};
    printf("Array addition ");
    s=Recursion_Addition(a,count,b);
    printf("%d",s);
}

int Recursion_Addition(int a[],int count,int b)
{
    if(count==6)
    {
        return b;
    }
    b=b+a[count];
    count++;
    Recursion_Addition(a,count,b);
}



