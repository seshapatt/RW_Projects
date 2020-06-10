#include<stdio.h>
#include<conio.h>
#define lengths 100

//https://www.hackerrank.com/challenges/alternating-characters/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

int counter[lengths],k=0;

int findlength(char s1[],int i,int count1)
{
    i=0;
    while(s1[i]!='\0')
    {
        count1=count1+1;
        i++;
    }
return count1;
}

void compare_repetitive(char s1[],int length)
{
    int i=0,j=1,count=0;
    for(i=0;i<length;i++)
    {
        if(s1[i]==s1[j])
        {
            count=count+1;
            j++;
        }
        else
        {
            j++;
        }

    }
    counter[k]=count;
    k++;
}

int main()
{
    char s1[lengths];
    int i=0,j=0,count=0,n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s1);
        int c=findlength(s1,i,count);
        compare_repetitive(s1,c);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",counter[i]);
    }
}
