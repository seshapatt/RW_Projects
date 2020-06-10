#include<stdio.h>
#include<conio.h>

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

int main()
{
    int count=0,i=0;
    char s[10]={'h','e','l','l','o',' ','d','a'};
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }

    printf("Original string is %s\n",s);

    for(i=0;i<=count-1;i++)
    {
        char temp=s[i];
        s[i]=s[count-1];
        s[count-1]=temp;
        count--;
    }

    printf("reverse string is %s",s);
}


