# include<stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%dX%d",n,i);
        int a = n*i;
        printf(":%d \n",a);
    }


}
