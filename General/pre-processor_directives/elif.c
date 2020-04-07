#include<stdio.h>
#include<conio.h>

#define age 10

int main()
{
    #if age<10
    printf("Age is below 10");
    #elif age==10
    printf("Age is 10");
    #endif // age
}
