#include<stdio.h>
#include<string.h>

void input_book(char title[],char author[],float *price)
{
    printf("Enter the title of the book: ");
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove newline character

    printf("Enter the author of the book: ");
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = '\0'; // Remove newline character

    printf("Enter the price of the book: ");
    scanf("%f", price);
    while(getchar() != '\n'); // Clear the input buffer
}

void print_book(char title[], char author[], float price)
{
    printf("\n%s is written by %s, and is sold for  $%.2f\n", title, author, price);
}

int main()
{
  printf("welcome to the book store\n");
  char titles[3][100];
  char authors[3][100];
  float prices[3];

  for (int i = 0 ; i < 3 ; i++)
  {
    input_book(titles[i], authors[i], &prices[i]);
  }
  printf("\n\n here are the details of all the books: \n");
  for (int i = 0 ; i < 3 ; i++)
  {
    print_book(titles[i], authors[i], prices[i]);
  }
  return 0;

}