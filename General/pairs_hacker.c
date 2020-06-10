#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define length 100

//https://www.hackerrank.com/challenges/pairs/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

int j=0;

int pairs(int a[],int n,int v)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==v)
            {
            count=count+1;
            }
        }
    }
    return count;
}

int main()
{
    int a[length],n,i,v;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter a value: ");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=pairs(a,n,v);
    printf("Count is %d",p);
}
