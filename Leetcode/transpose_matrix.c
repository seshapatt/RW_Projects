#include<stdio.h>
#include<conio.h>

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
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe given matrix is \n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }


    for(int i=0;i<r;i++)
    {
        int k=i;
        for(int j=i;j<c;j++)
        {
            int temp=a[i][k];
            a[i][k] = a[j][i];
            a[j][i]=temp;
            k++;
        }
    }

    printf("\nThe transpose of the given matrix is \n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }

}
