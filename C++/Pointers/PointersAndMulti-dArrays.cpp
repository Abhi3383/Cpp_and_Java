
void Func(int *A) // passing 1-d array
{
}
void Funct(int (*A)[3]) // or  void Funct(int A[][3])
{
}
void Functi(int (*A)[2][2]) // passing 2-d array
{
}
void Functi(int A[][2][3]) // passing 1-d array
{
}

#include <stdio.h>

int main()
{
    int c[3][2][2] = {
        {{2, 5}, {7, 9}},
        {{3, 4}, {6, 1}},
        {{0, 8}, {11, 13}}};
    printf("%d\n%d\n%d\n%d\n", c, *c, c[0], &c[0][0]);
    printf("%d\n", *(c[0][0] + 1));
    Functi(c);

    int A[2] = {1, 2};
    Func(A); // A return int *(pointer to integer)

    int B[2][3] = {{2, 4, 6}, {5, 7, 8}};
    Funct(B); // B returns int (*)[3](pointer to array of 3 integer)

    int c[2][4];
    // Funct(c); error -> c return int (*)[4]
    int d[4][3];
    Funct(d); // this is fine
}