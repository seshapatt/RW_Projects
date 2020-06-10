#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/

int counter(char s[])
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }
    return count;
}

int main()
{
    int i=0,j=0,count;
    char s[100];
    printf("Enter a string: ");
    gets(s);
    count=counter(s);

    for(i=0;i<=count;i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            s[j]=s[i];
            j++;
        }

        else
        {
            // do nothing
        }

    }
    s[j]=s[count];
    printf("%s",s);

    int count1=counter(s);


    for(i=0;i<count1;i++)
    {
        if((s[i]==s[count1-1]+32) || (s[i]==s[count1-1]-32) || s[i]==s[count1-1])
        {
            count1--;
        }
        else
        {
            printf("\nFalse");
            return 0;
        }
    }
    printf("\nTrue");
}


