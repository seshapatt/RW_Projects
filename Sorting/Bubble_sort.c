# include<stdio.h>
# include<conio.h>

int swap(int *a, int*b)
{
    int temp = *a;
    * a = * b;
    * b = temp;
}

int Bubble_sort(int A[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
        if(A[j]>A[j+1])
        {
            swap(&A[j],&A[j+1]);
        }
    }
    }
}

int main()
{
    int A[]={12,25,13,54,45};
    Bubble_sort(A,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\t",A[i]);
    }


}