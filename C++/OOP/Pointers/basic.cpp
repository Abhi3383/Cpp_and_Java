/* IF we declare a value pointer like int *p;
   and if we print p then it will print of which to it is pointing
   but if we print *p it will the vaue of which it was pointing to
*/

#include <stdio.h>

int main()
{
   int x = 25;
   int *y = &x;
   printf("y gives address = %d, *y gives Value = %d", y, *y);
   printf("\n&x gives Address = %d, x gives Value = %d\n\n", &x, x);

   int a = 1025;
   int *p;
   p = &a;
   printf("Size of integer is %d bytes\n", sizeof(int));
   printf("Address = %d, Value = %d", p, *p);
   printf("\nAddress = %d, Value = %d\n", p + 1, *(p + 1));

   printf("\n");

   char *q;
   // pm is a pointer to character and p is pointer to integer
   // so for that reason we will do typecasting
   // we will typecast p to character pointer and then assign the value
   q = (char *)p; // typecasting
   printf("Size of character is %d bytes\n", sizeof(int));
   printf("Address = %d, Value = %d", q, *q);
   printf("\nAddress = %d, Value = %d\n", q + 1, *(q + 1));

   return 0;
}