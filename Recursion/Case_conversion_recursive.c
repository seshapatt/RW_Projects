#include<stdio.h>
#include<conio.h>

char* recursion_upper(char s[],int i)
{
    if(s[i]=='\0')
    {
        return s;
    }
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]=s[i]-32;
        return recursion_upper(s,i);
    }
    i++;
    return recursion_upper(s,i);
}

char* recursion_lower(char s[],int i)
{
    if(s[i]=='\0')
    {
        return s;
    }
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
        return recursion_lower(s,i);
    }
    i++;
    return recursion_lower(s,i);
}


int main()
{
    int i=0;
    printf("Case conversion\n");
    char s[]="Amma";
    char* s2=recursion_upper(s,i);
    printf("%s",s2);
    char* s3=recursion_lower(s,i);
    printf("\n%s",s3);
}

