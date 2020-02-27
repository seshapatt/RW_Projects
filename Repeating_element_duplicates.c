# include<stdio.h>

int main()
{
    int n,a[50],sum=0;
    printf("Input the number of elements in an array\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("These numbers are repeating\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=1+i;j<=n;j++)
        {
        if(a[i]==a[j])
        {
            printf("%d\n",a[i]);
            sum=sum+1;
        }

    }
    }
    printf("Total number of duplicates is %d",sum);
}
