#include <stdio.h>
#include <string.h>

int size(char s[])
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count = count +1;
        i++;
    }
    return count;
}

int compare(char s1[],char s[],int i,int j)
{
    printf("Value of i is %d and value of j is %d\n",i,j);
    if(s1[j]=='\0')
    {
        return 50;
    }
    while(s1[j]!='\0')
    {
        if(s1[j]==s[i])
        {
            i++;
            j++;
            return compare(s1,s,i,j);
            return 50;
        }
        else
        {
            return 100;
        }
    }
    return 100;
}


int main()
{
    int i=0,j=0;
    char s[]="amma";
    char s1[]="ma";
    int length=size(s);
    int length1=size(s1);
    if(length1>length)
    {
        printf("Sorry the length of substring exceeds the size of the array");
        return 1;
    }

    while(s[i]!='\0')
    {
        if(s1[j]==s[i])
        {
            int s2=compare(s1,s,i+1,j+1);
            if(s2==50)
            {
                    printf("It is present");
                    break;
            }
            else
            {
                printf("Substring is not present");
                break;
            }
        }
        else
        {
            i++;
        }
    }
}
