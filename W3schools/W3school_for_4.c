# include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&n);
        sum=sum+n;
    }

    printf("Sum of ten numbers is %d",sum);
    int avg=sum/10;
    printf("\nThe average is %d ",avg);
}
