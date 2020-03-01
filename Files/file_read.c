#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fpointer;
    fpointer=fopen("employees.txt","r");
    char everyline[100];
    while(!feof(fpointer))
    {
    fgets(everyline,100,fpointer);
    puts(everyline);
    }
    fclose(fpointer);
}
