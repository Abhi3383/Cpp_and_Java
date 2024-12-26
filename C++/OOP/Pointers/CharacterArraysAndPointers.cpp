#include <stdio.h>
#include <string.h>

void print(char *c)
{
  int i;
  while (c[i] != '\0') // c[i] is same as *(c+i)
  {
    printf("%c", c[i]);
    i++;
  }
  printf("\n");
}

void printe(char *d)
{
  int i;
  while (*d != '\0') // c[i] is same as *(c+i)
  {
    printf("%c", *d);
    d++;
  }
  printf("\n");
}
int main()
{
  char c[20] = "Hello"; // string gets stored in the space for array
  print(c);

  char d[20] = "Abhishek";
  printe(d);

  char e[] = "Gupta";
  print(e);

  char *f = "Bhai"; // string gets stored as compile time constant
  printe(f);
}