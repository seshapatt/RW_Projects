# include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Number %d cube is ",i);
        int a = i*i*i;
        printf("%d\n",a);
    }
}
