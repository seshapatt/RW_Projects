#include<stdio.h>
#include<conio.h>

int partition(int a[],int n)
{
    int s=n+1;
    int pivot=a[s-1],start=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<pivot)
        {
            int temp=a[i];
            a[i]=a[start];
            a[start]=temp;
            start++;
        }
    }
    int temp=a[start];
    a[start]=pivot;
    a[s-1]=temp;
    return start;

}

int quicksort(int a[],int start,int n)
{
    if(start<n)
    {
        int p=partition(a,n);
        quicksort(a,start,p-1);
        quicksort(a,p,n);
    }
    return a;
}

int main()
{
    int n,a[100],start=0;
    printf("Quick Sort\n");
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,start,n-1);
    printf("The quick sort is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
