# include<stdio.h>
# include<conio.h>

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int Partition(int A[],int start,int end)
{
    int pivot = A[end];
    int partition=start;
    for(int i=start;i<end;i++)
    {

        if(A[i]<pivot)
        {
            swap(&A[i],&A[partition]);
            partition++;
        }
    }
        swap(&A[partition],&A[end]);
        return partition;
}



int Quick_sort(int A[], int start, int end)
{
    if(start<end)
    {
    int partition = Partition(A,start,end);
    Quick_sort(A,0,partition-1);
    Quick_sort(A,partition+1,end);
    }
}


int main()
{
    int A[]={24,45,1,32,54,5};
    Quick_sort(A,0,5);
    for (int i=0;i<6;i++)
    {
        printf("%d\t",A[i]);
    }
}
