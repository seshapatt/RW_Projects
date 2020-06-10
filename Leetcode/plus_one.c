#include<stdio.h>
#include<conio.h>


//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

int plus_one(int a[],int n)
{
    a[n-1]=a[n-1]+1;
    return a;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    plus_one(p,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
