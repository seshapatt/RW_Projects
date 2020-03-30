#include<stdio.h>
#include<conio.h>

int recursion(char s[],int count,char s1[],int i)
{
    if(count<0)
    {
        printf("%s",s1);
        return 0;
    }
    s1[i]=s[count];
    count--;
    i++;
    return recursion(s,count,s1,i);
}

void comparison(char s[],char s1[],int i)
{
    if(s[i]==s1[i])
    {
        i++;
    }
    else
    {
        printf("\nNot a palindrome");
        return;
    }
    printf("\nIt is a palindrome");
}

int main()
{
    int count=4,i=0;
    char s1[50];
    printf("Palindrome\n");
    char s[]="madam";
    recursion(s,count,s1,i);
    comparison(s,s1,i);
}

