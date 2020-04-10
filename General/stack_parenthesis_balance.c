#include<stdio.h>
#include<conio.h>
#define length 20
char s[length];
int top=-1;

void push(char a)
{
    if(a=='{' || a=='[' || a=='(')
        {
            top++;
            s[top]=a;
            return;
        }

    else if(a=='}' || a==']' || a==')')
    {
        if(s[top]=='{' && a=='}')
            {
                top--;
                return;
            }
        else if(s[top]=='[' && a==']')
            {
                top--;
                return;
            }
        else if(s[top]=='(' && a==')')
            {
                top--;
                return;
            }

            printf("Not balanced");
    }
}


int main()
{
    printf("Parenthesis Balancing \n");
    push('{');
    push('(');
    push(')');
    push('(');
    push(')');
    push('}');
}
