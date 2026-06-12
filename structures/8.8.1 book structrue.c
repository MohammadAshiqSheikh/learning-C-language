#include <stdio.h>
#include <string.h>

struct book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct book Book;

void input_book(Book *book)
{
  printf("\n please enter the book title: ");
  fgets(book->title, 100, stdin);
  book->title[strcspn(book->title, "\n")] = 0;
  printf("\n please enter the book author: ");
  fgets(book->author, 100, stdin);
  book->author[strcspn(book->author, "\n")] = 0;
  printf("\n please enter the book price: ");
  scanf("%f", &(book->price));
  while (getchar() != '\n')
    ;
}
void print_book(Book *book)
{
  printf("\n%s is written by %s, and is sold for rs. %.2f\n", book->title, book->author, book->price);
}

int main()
{
  printf("welcome to the book store\n");
  Book books[3];

  for (int i = 0; i < 3; i++)
  {
    input_book(&books[i]);
  }

  printf("\n\nHere are the details of the books you entered:\n");
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);
  }
  return 0;
}
