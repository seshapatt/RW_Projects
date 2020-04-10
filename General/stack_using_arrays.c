#include<stdio.h>
#include<conio.h>
#define length 100
int A[length];
int top=-1;

int push(int n)
{
    if(top==length-1)
    {
        printf("\nMemory Full");
        return 1;
    }
    top++;
    A[top]=n;
}

int pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return 0;
    }
    top--;
}

int Top()
{
    printf("\nThe top most element is %d ",A[top]);
    printf("\n");
}


void Print()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    printf("Stack\n");
    push(2);
    push(5);
    push(10);
    Print();
    pop();
    Print();
    push(11);
    Print();
    Top();
    Print();
}
