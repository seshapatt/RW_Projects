#include<stdio.h>
#include<conio.h>
#define length 100
int s[length];
int top=-1;

void push(int n)
{
  if(n=='*')
  {
      int p=s[top];
      top--;
      int p1=s[top];
      int result = p*p1;
      s[top]=result;
      return;
  }

  else if(n=='/')
  {
      int p=s[top];
      top--;
      int p1=s[top];
      int result = p1/p;
      s[top]=result;
      return;
  }

  else if(n=='+')
  {
      int p=s[top];
      top--;
      int p1=s[top];
      int result = p+p1;
      s[top]=result;
      return;
  }

  else if(n=='-')
  {
      int p=s[top];
      top--;
      int p1=s[top];
      int result = p1-p;
      s[top]=result;
      return;
  }

  top++;
  s[top]=n;
}


int main()
{
    printf("Postfix\n");
    push(2);
    push(3);
    push('*');
    push(5);
    push(4);
    push('*');
    push('+');
    push(9);
    push('-');
    printf("%d",s[top]);
}
