#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/

int count(char s[])
{
    int count=0,i=0;
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }
    return count;
}

char* compare(char* s,int c)
{
    int i,j;
    for(i=0;i<c-1;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(s[i]>=s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    return s;
}

int main()
{
    int i,c,c1,j=0;
    char s[10],s1[10];
    printf("Enter a string s: ");
    scanf("%s",s);
    printf("\nEnter a string s1: ");
    scanf("%s",s1);
    c=count(s);
    c1=count(s1);

    char *news= compare(s,c);

    char *news1=compare(s1,c1);

    if(c==c1)
    {
        for(i=0;i<c;i++)
        {
            if(news[i]==news1[j])
            {
                j++;
            }
            else
            {
                printf("False");
                return;
            }
        }
    }
    else
    {
        printf("False");
        return;
    }

}


