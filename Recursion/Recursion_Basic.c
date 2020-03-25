# include<stdio.h>
# include<conio.h>


F_Recursion(int n)
{
    if(n>0)
    {
    F_Recursion(n-1);
    printf("%d ",n);
    }
    else
    {
        return;
    }
}

R_Recursion(int n)
{
    if(n>0)
    {
    printf("%d ",n);
    R_Recursion(n-1);
    }
    else
    {
        return;
    }
}



int main()
{
   int n;
   printf("Enter a number for Recursion ");
   scanf("%d",&n);
   printf("Forward Recursion ");
   F_Recursion(n);
   printf("\n");
   printf("Reverse Recursion ");
   R_Recursion(n);
   printf("\n");
}



