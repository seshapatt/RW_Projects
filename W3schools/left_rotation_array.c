//https://www.hackerrank.com/challenges/array-left-rotation/problem
#include<stdio.h>
#include<conio.h>
#define length 50
int a[length];

int rotations(int d,int n)
{
    if(n%d==0)
    {
        return *a;
    }

    for(int i=0;i<d;i++)
    {
        int temp = a[0];
        for(int j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[n-1]=temp;
    }
}

int main()
{
    int d,n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the rotations to be performed: ");
    scanf("%d",&d);
    rotations(d,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
