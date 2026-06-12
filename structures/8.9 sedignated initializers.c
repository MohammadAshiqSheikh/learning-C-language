#include <stdio.h>
#include <string.h>

struct book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct book Book;


void print_book(Book *book)
{
  printf("\n%s is written by %s, and is sold for rs. %.2f\n", book->title, book->author, book->price);
}

int main()
{
  printf("welcome to the book store\n");
  Book books[3] = 
  {
    {.title = "The Great Gatsby", .author = "F. Scott Fitzgerald", .price = 10.99},
    {.title = "To Kill a Mockingbird", .author = "Harper Lee", .price = 8.99},
    {.title = "1984", .author = "George Orwell", .price = 9.99}
  };

  

  printf("\n\nHere are the details of the books you entered:\n");
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);
  }
  return 0;
}
