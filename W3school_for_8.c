# include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(int i=1;i<=n*2;i++)
    {
        if(i%2!=0)
        {
            printf("The odd numbers are %d\n",i);
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
