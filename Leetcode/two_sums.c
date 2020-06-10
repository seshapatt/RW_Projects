#include<stdio.h>
#include<conio.h>

two_sum(int a[],int n,int sum)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)  // 2 15 11 7
            {
                printf("The numbers are %d %d and their positions are %d %d",a[i],a[j],i,j);
            }
        }
    }
}

int main()
{
    int n,sum;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);

    two_sum(p,n,sum);
}
