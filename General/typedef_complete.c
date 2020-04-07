#include <stdio.h>
#include <string.h>

typedef struct book
{
    char title[50];
    char author[50];
    int cost;
}b;


int main()
{
    printf("Typedef example\n");
    typedef int sesha;
    sesha a =10;
    printf("Value of a is %d\n",a);
    b book1={"Naruto","Kishimoto",5};
    b book2={"One Piece","Oda",6};
    printf("Details of the first anime is %s %s %d\n",book1.title,book1.author,book1.cost);
    printf("Details of the second anime is %s %s %d",book2.title,book2.author,book2.cost);
}
