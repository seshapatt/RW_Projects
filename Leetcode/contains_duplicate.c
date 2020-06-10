#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

int duplicates(int a[],int n)
{
    int i=0,j=1;
    for(i=0;i<n-1;i++)        // 1 2 3 4
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("true");
                return;
            }
        }
    }
    printf("False");
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
    duplicates(p,n);
}
