#include<stdio.h>
#include<conio.h>
#define length 5
int a[length];
int rear=0,front=0;
int i=0;

int main()
{
    printf("Queue\n");
    enqueue(2);  //2  2 5 7  pop 2
    enqueue(5);  //5
    enqueue(7);  //7
    enqueue(8);
    enqueue(9);
    enqueue(11);
    Print();
    peek();//

    dequeue();
    printf("\n");
    Print();
    peek();

    dequeue();
    printf("\n");
    Print();
    peek();

    dequeue();
    printf("\n");
    Print();
    peek();

    dequeue();
    printf("\n");
    Print();
    peek();

    dequeue();
    printf("\n");
    Print();
    peek();

    dequeue();
    printf("\n");
    Print();
}

void enqueue(int n)
{
    if(i<length)
    {
        a[i]=n;
        i++;
        rear++;
    }
    else
    {
        printf("Enqueue has reached its max size\n");
    }
}

void dequeue()
{
    if(front==length)
    {
        printf("Oops Dequeue reached max size of the array");
        return;
    }
    front++;
}

void peek()
{
    printf("\nPeek %d\n",a[front]);
}

Print()
{
    int i=0;
    for(i=front;i<rear;i++)
    {
        printf("%d ",a[i]);
    }
}
