#include<stdio.h>
#include<conio.h>

int main()
{
    int count=0;
    char n[50],n1[50];
    printf("Enter your name ");
    gets(n);
    while(n[count]!='\0')
    {
        count+=1;
    }
printf("The count is %d\n",count);

n[count]='\0';
for(int i=count-1;i>=0;i--)
{
    printf("%c",n[i]);
}


}



/*  01234567
//  aravind0   n1[7]=n[0]

n1[7]=n[0]  a
n1[6]=n[1]  r
n1[5]=n[2]  a
n1[4]=n[3]  v
n1[3]=n[4]  i
n1[2]=n[5]  n
n1[1]=n[6]  d
n1[0]=n[7]  0

*/






