#include <stdio.h>

void input(int *, int);
void display(int *, int);
int main()
{
    int a[101];
    input(a, 10);
    display(a, 10);
    printf("\n");
    return 0;
}
void display(int *p, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", *(p + i));
}
void input(int *p, int size)
{
    int i;
    printf("Enter the numbers :", size);
    for (i = 0; i < size; i++)
        scanf("%d", p + i);
}