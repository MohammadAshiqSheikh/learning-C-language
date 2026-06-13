#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("welcome to our dyamic characters\n");
  char *sentence = (char *)calloc(100, sizeof(char));
  if (sentence == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("\n ensuring all elements are initialized.\n");
  for (int i = 0; i < 100; i++)
  {
    printf("%d ", sentence[i]);
  }

  printf("\n Now Enter a piece of text: ");
  fgets(sentence, 100, stdin);

  printf("\n Here is your text: %s", sentence);

  free(sentence);
  sentence = NULL;
  return 0;






}