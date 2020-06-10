#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    int *p=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}

