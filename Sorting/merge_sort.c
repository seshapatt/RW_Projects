#include<stdio.h>
#include<conio.h>
#define length 100


int merge(int a[],int left[],int mid,int right[],int end)
{
    int k=0,i=0,j=0;

    while(i<mid && j<end)
    {
        if(left[i]<right[j])
        {
            a[k]=left[i];
            k++;
            i++;
        }
        else
        {
            a[k]=right[j];
            k++;
            j++;
        }
    }

    while(i<mid)
    {
        a[k]=left[i];
        k++;
        i++;
    }

    while(j<end)
    {
        a[k]=right[j];
        k++;
        j++;
    }

}

int merge_sort(int a[],int end)
{
    int start=0,left[100],right[100];
    if(end<2)
    {
        return;
    }
    int mid=end/2;
    for(int i=start;i<mid;i++)
    {
        left[i]=a[i];
    }

    for(int i=mid;i<end;i++)
    {
        right[i-mid]=a[i];
    }

    merge_sort(left,mid);
    merge_sort(right,end-mid);
    merge(a,left,mid,right,end-mid);
}


int main()
{
    int n,a[100],start=0,end;
    printf("Merge Sort\n");
    printf("Enter the number of terms:");
    scanf("%d",&end);
    for(int i=0;i<end;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,end);
    printf("The merge sort is: ");
    for(int i=0;i<end;i++)
    {
        printf("%d ",a[i]);
    }
}
