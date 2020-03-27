#include<stdio.h>
#include<conio.h>

int main()
{
    int b=0;
    int a[]={5,6,7,8,9};
    printf("Array addition ");
    for(int i=0;i<5;i++)
    {
        b=b+a[i];
    }
    printf("%d",b);
}
