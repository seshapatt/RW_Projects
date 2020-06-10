#include<stdio.h>
#include<conio.h>

int length(char s[])
{
    int l=0,i=0;
    while(s[i]!='\0')
    {
        l=l+1;
        i++;
    }
    return l;
}

int main()
{
    int i,l;
    char s[]="Hello there dude";
    l=length(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            i++;
            printf("\n");
        }
        printf("%c",s[i]);
    }

}
