#include <stdio.h>
#include<conio.h>

char *finder(char s[],int c,char s1[],int c1)
{
    int j=0,count=0;
    for(int i=0;i<c;i++)
    {
        if(s[i]==s1[j]&& count<c1)
        {
            j++;
            count++;
        }

        if(count==c1)
        {
            printf("\nFound");
            return;
        }

        else if(s[i-1]==s1[j-1])
        {
            j--;
            count--;
        }

    }
    printf("Not found");
}

int counter(char s[])
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count =count+1;
        i++;
    }
    return count;
}

int main()
{
    char s[50],s1[50];
    printf("Enter string1: ");
    scanf("%s",s);
    printf("\nEnter string2: ");
    scanf("%s",s1);
    int c=counter(s);
    int c1=counter(s1);
    finder(s,c,s1,c1);
}
