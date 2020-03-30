#include<stdio.h>
#include<conio.h>

char* convert_upper(char s[])
{
    int i=0;
    for(i=0;i<4;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    return s;
}

char* convert_lower(char su[])
{
    int i=0;
    for(i=0;i<4;i++)
    {
        if(su[i]>='A' && su[i]<='Z')
        {
            su[i]=su[i]+32;
        }
    }
    return su;
}

int main()
{
    printf("Case conversion\n");
    char s[]="Amma";
    char* s2=convert_upper(s);
    printf("%s",s2);
    char* s3=convert_lower(s);
    printf("\n%s",s3);
}

