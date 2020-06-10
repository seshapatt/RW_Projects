#include<stdio.h>
#include<conio.h>
#define length 100

//https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

int findlength(char s1[],int i,int count1)
{
while(s1[i]!='\0')
    {
        count1=count1+1;
        i++;
    }
    return count1;
}

void compare(char s1[],char s2[],int c,int c1,int i,int j)
{
    for(i=0;i<c;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(s1[i]==s2[j])
            {
            printf("Yes");
            return;
            }
        }
    }
    printf("No");
}

int main()
{
    char s1[length],s2[length];
    int i=0,j=0,count=0;
    printf("Enter the first word: ");
    scanf("%s",s1);
    printf("Enter the second word: ");
    scanf("%s",s2);
    int c=findlength(s1,i,count);
    int c1=findlength(s2,i,count);
    compare(s1,s2,c,c1,i,j);
}
