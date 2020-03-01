# include<stdio.h>
# include<conio.h>

int Insertion_sort(int A[],int n)
{
    int i, value, hole;
    for (i=1;i<n;i++)
    {
    value = A[i];
    hole = i;
    while(hole>0 && A[hole-1]>value)
    {
        A[hole]=A[hole-1];
        hole=hole-1;
    }
    A[hole]=value;
    }


}
    


int Value_print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}

int main()
{
    printf("Insertion sort \n");
    int A[5] = {7, 2, 1, 35, 15};
    int n = sizeof(A)/sizeof(A[0]);
    Insertion_sort(A,n);
    Value_print(A,n);
    return 0;
}
