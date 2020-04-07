# include<stdio.h>
# include<conio.h>
# include<string.h>

typedef union books
{
    char title[50];
    char author[50];
    int cost;
}b;

int main()
{
    b book1;
    strcpy(book1.title,"Veda");
    printf("%s",book1.title);
    strcpy(book1.author,"Sesha");
    printf("\n%s",book1.author);
    book1.cost=3500;
    printf("\n%d",book1.cost);
}
