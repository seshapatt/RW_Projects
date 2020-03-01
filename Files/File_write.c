#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fpointer;
    fpointer=fopen("employees.txt","w");
    fprintf(fpointer,"Jason Manager\nMicheal Lawyer\nVictor Salesman");
    fputs("\nMike Painter\nTyson Fighter",fpointer);
    fclose(fpointer);
}
