#include<stdio.h>
#include<conio.h>

int Selection_sort(int a[],int n)
{
    int i,p,j;
    for(i=0;i<n-1;i++)
    {
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[p]>a[j])
            {
                p=j;
            }
        }
        int temp=a[i];
        a[i]=a[p];
        a[p]=temp;
    }
    return a;
}

int main()
{
    int a[100],n,i;
    printf("Bubble sort\n");
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Selection_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
