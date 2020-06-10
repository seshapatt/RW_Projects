#include<stdio.h>
#include<conio.h>

int main()
{
    int c,r,i,j,sum=0,sum1=0;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

// Printing the array matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }

//Printing the sum of right diagonal

    i=0,j=0;
    while(i<r && j<c)
    {
        sum= sum + a[i][j];
        i++;
        j++;
    }
    printf("Sum is %d ",sum);

//Printing the sum of left diagonal

    i=0,j=c-1;
    while(i<r && j>=0)
    {
        sum1= sum1 + a[i][j];
        i++;
        j--;
    }
    printf("Sum is %d ",sum1);
}

