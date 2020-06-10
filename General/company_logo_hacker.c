#include <stdio.h>
#include<conio.h>
#include <string.h>
int a[50]={0};


void mapping(char s[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                char temp1=s[j];
                s[j]=s[j+1];
                s[j+1]=temp1;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\nCharacter %c has repeated %d times",s[i],a[i]);
    }
}

void counter(char s[],int n)
{
    int count=1,i;
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            count=count+1;
        }
        else
        {
                a[i]=count;
                count=1;
        }
    }
    mapping(s,n);
}

int main()
{
    int i=0,j=1,count=0;
    char s[20];
    printf("Enter a string: ");
    scanf("%s",&s);
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }


    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
        if(s[i]>=s[j])
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        }
    }
    printf("String in main is %s",s);
    counter(s,count);
}
