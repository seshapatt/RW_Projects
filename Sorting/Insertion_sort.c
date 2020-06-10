#include<stdio.h>
#include<conio.h>

void Insertion_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
}

int main()
{
    int a[100],n;
    printf("Insertion sort\n");
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
