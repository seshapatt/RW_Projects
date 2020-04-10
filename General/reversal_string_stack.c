#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=0;
char s1[10];

void push(char c)
{
    if(top==5)
    {
        while(top!=-1)
        {
            pop(s1[top],top);
            top--;
        }
    }
    s1[top]=c; //0g   1e   2a  3r
    printf("%c",s1[top]);
    top++;
}

void pop(char c, int top)
{
    if(top==-1)
    {
        printf("Oops memory is full");
        return;
    }
    printf("%c",s1[top]);
    top--;
}

int main()
{
    int i=0;
    char s[10];
    scanf("%s",&s);
    while(i<=5)
    {
       push(s[i]);
       i++;
    }
}
