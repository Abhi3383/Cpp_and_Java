#include <stdio.h>
// in structure memory sharing is not allowed every variable get its own memory
// In union memonry sharing is allowed every variable can share its own memory with other variable
union demo
{
    int i;
    char ch[2];
};

int main()
{
    union demo a;
    a.i = 3270;
    printf("a.i = %d\n", a.i);
    printf("%d %d %d %d\n", a.ch[0], a.ch[1], a.ch[2], a.ch[3]);
    return 0;
}