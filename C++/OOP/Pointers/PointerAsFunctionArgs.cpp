/*
* Pointer as function arguments - Call by refrence
  As we pass the pointer such as int *p in parameters it is poiting to something
  and then it will change its value
  but when we pass formal arguments as parameters such as int p
  it will just create the copy of that variable and the changes will be done in formal parameters only
  it will not be seen or entertained in actual parameters when called
 */

#include <stdio.h>
void Increment(int *p)
{
    *p = *p + 1;
    printf("Address of [pointer p in increment = %d\n", &p);
    printf("Value = %d\n", *p);
}
int main()
{
    int a;
    a = 10;
    Increment(&a);
    printf("Address of variable a in increment =%d\n", &a);
    printf("Value = %d\n", a);

    // printf("a = %d", a);
}