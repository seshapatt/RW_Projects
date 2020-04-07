#include<stdio.h>
#include<conio.h>
#define age 10
#define name "sesha"

int main()
{
    #if age
    printf("%s is %d years old",name,age);
    #else
    printf("Not defined");
    #endif
}
