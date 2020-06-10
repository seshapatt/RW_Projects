#include<stdio.h>
#include<conio.h>

// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

void move_zeros(int p[],int n,int count)
{
    int k=0;
    while(k<count)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]==0)
            {
                for(int j=i+1;j<n;j++)             //0 2 1 0 5 8  // 2 1 5 8 0 0
                {
                    int temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                    i++;
                }
            }
        }
        k++;
    }

}

int main()
{
    int n,count=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(p[i]==0)
        {
            count=count+1;
        }
    }

    move_zeros(p,n,count);
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
