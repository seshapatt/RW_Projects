# include<stdio.h>
# include<conio.h>

int main()
{
    int n,i,j,a[100];
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              int temp;
              temp = a[i];
              a[i]= a[j];
              a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("The new array is %d\n",a[i]);
    }
}
