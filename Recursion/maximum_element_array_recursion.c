#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=1,max,count;
    printf("Finding maximum element in an array ");
    int a[]={5,-20,-451,450};
    count=4;
    if(count>0)
    {
        max=recursion(a,count,i,j);
        printf("%d",max);
    }
}

int recursion(int a[],int count,int i,int j)
{
    if(j==count)
    {
        return a[i];
    }
    if(a[i]<a[j])                       //5,20,-300,450
    {
        a[i]=a[j];
        j++;
        return recursion(a,count,i,j);
    }
    else
    {
        j++;
        return recursion(a,count,i,j);
    }
}

