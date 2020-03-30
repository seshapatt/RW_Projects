#include<stdio.h>
#include<conio.h>

int main()
{
    int max,count;
    int a[]={8,498,48,-580};
    count=4;
    printf("Finding maximum element in an array ");
    if(count>1)
    {
    max=maximum(a,count);
    printf("\nThe maximum number in the array is %d",max);
    }
}

int maximum(int a[],int count)
{
    int j;
        for(j=0;j<=count;j++)
        {
            if(a[0]<a[j])
            {
                a[0]=a[j];
            }
        }
    return a[0];
}

