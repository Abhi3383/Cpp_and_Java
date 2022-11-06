#include <stdio.h>
#include <string.h>
int main()
{
    char c[4];
    c[0] = 'J';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    c[4] = '\0';
    printf("%s", c);
    int len = strlen(c);
    printf("\nlength = %d\n", len);

    char d[20] = "Abhishek";
    int leng = strlen(d);
    printf("\nlength = %d\n", leng);

    char e[] = "gupta"; // size has been allocated 6 bytes +1 for Null character
    printf("\nSize in bytes = %d", sizeof(e));
    int lengt = strlen(e); // but the length is 5, NULL character dosent get count
    printf("\nlength = %d\n", lengt);

    char f[5] = {'s', 'i', 'n', 's', '\0'}; // here Null teremination will not be implicit has to do exlplicitly
    int lengths = strlen(f);
    printf("\nlength = %d\n", lengths);
}