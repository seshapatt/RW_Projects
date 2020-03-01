# include<stdio.h>

int main()
{
    int n,k=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The pattern like:\n");

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        printf("%d",k++);
        }
        printf("\n");
    }
}

