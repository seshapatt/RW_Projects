#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fpointer;
    fpointer=fopen("employees.txt","a");
    fputs("\nAli Boxer\nGeorge Bouncer\n",fpointer);
    fclose(fpointer);
}
