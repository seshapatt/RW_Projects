#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fpointer;
    fpointer=fopen("employees.txt","w+");
    fputs("Jason Manager",fpointer);
    fseek(fpointer,6,SEEK_SET);
    fputs("Singer ",fpointer);
    fclose(fpointer);
}
