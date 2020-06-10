#include<stdio.h>
#include<conio.h>

int main()
{
int i=1,j,k=1;
    while(i<17)
    {
        for(j=i;j<i+k;j++)
        {
            printf("%d ",j);
        }
        k=k+1;
        i=j;
        printf("\n");
    }
}
/*
1
2 3
4 5 6
7 8 9 10*/
