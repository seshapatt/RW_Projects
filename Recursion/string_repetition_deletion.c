#include<stdio.h>
#include<conio.h>

int count(char s[])
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count=count+1;
        i++;
    }
    return count;
}


int main()
{
    int i,j,k;
    char s[]="namaskaram";
    int length=count(s);

for(i=0;i<length-2;i++)
{
 for(j=i+1;j<length;j++)
  {
    if(s[i]==s[j])
    {
        s[j]='f';
    }
  }
}

for(int i=0;i<length-2;i++)
{
    for(j=0;j<length;j++)
    {
        if(s[j]=='f')
        {
         for(int k=j;k<length;k++)
         {
            s[k]=s[k+1];
         }
        }
    }
}

printf("%s",s);
}
