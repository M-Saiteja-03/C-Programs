#include<stdio.h>
#include<string.h>
struct books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};
void printbooks(struct books*);
int main()
{
    struct books book1,book2;
    strcpy(book1.title,"C programming");
    strcpy(book1.author,"Marepally Saiteja");
    strcpy(book1.subject,"C programming tutorials");
    book1.book_id=1234566;
    strcpy(book2.title,"Java programming");
    strcpy(book2.author,"Marepally Saiteja");
    strcpy(book2.subject,"Java programming tutorials");
    book2.book_id=1234567;
    printbooks(&book1);
    printf("\n");
    printbooks(&book2);
}
void printbooks(struct books *p)
{
    printf("BOOK TITLE:%s\n",p->title);
    printf("BOOK AUTHOR:%s\n",p->author);
    printf("BOOK SUBJECT:%s\n",p->subject);
    printf("BOOK ID:%d\n",p->book_id);
}
