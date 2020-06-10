#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/

int main()
{
    int r,c,a[10][10];
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[j][i]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }



    for(int i=0;i<r;i++)
    {
        int k=c-1;
        for(int j=0;j<c-2;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            k--;
        }
    }

    printf("\n\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }
}
