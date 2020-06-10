#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

int duplicates(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count=count+1;
        }
    }
    return n-count;
}

int main()
{
    int n;
    printf("Remove duplicates from sorted array:");
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    int *p=(int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int d=duplicates(p,n);
    printf("\nThe new length of the sorted array after removing duplicates is: %d",d);
}
