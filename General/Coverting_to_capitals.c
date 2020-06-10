#include <stdio.h>
#include<conio.h>
#include<string.h>

int count(char s[])
{
    int i=0,c=0;
    while(s[i]!='\0')
    {
        c=c+1;
        i++;
    }
    return c;
}

int main()
{
    int c;
    char s[50];
    printf("Enter a name: ");
    gets(s);
    c=count(s);//hello there
    for(int i=0;i<c;i++)
    {
        if(i==0 && s[i]>='a' && s[i]<='z')
        {
           s[i]=s[i]-32;
        }
        else if(s[i]==' ')
        {
            if(s[i+1]>='a' && s[i+1]<='z')
            {
            s[i+1]=s[i+1]-32;
            }
        }
    }
    printf("%s",s);

}
