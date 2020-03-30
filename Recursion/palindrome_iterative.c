#include<stdio.h>
#include<conio.h>

int main()
{
    int count=4,j=0;
    printf("Palindrome\n");
    char s[]="madam";
    char s1[50];

    s1[count+1]='\0';
    for(int i=count;i>=0;i--)
    {
        s1[j]=s[i];
        j++;
    }

    palindrome(s,s1,count);
}

void palindrome(char s[],char s1[],int count)
{
    int i;
    for(i=0;i<=count;i++)
    {
        if(s[i]==s1[i]);
        else
        {
        printf("%s is not a Palindrome",s);
        return;
        }
    }
    printf("%s is a palindrome",s);
}
