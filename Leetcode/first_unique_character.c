#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/

int main()
{
    int i=0,count=0;
    char s[10];
    printf("Enter a string: ");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }

    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(s[i]==s[j])
            {
                break;
            }
            if(s[i]!=s[j] && j==count-1)
            {
                printf("%d",i);
                return 0;
            }
        }
    }

}


