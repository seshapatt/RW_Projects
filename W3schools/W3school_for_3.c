# include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    printf("The first %d natural numbers is ",n);
    for(int i=0;i<=n;i++)
    {
    printf("%d ",i+1);
    sum = sum+i;
    }
    printf("\nThe sum is %d",sum);



}
