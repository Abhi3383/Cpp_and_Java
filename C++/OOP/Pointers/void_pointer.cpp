#include <stdio.h>

int main()
{
  int a = 1025;
  int *p;
  p = &a;
  printf("Size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, Value = %d", p, *p);

  /* 👉Void pointer - Generic pointer
     - Dont need to do explicit type casting in void pointer
     - This particular data type is not mapped to a particular data type
       we cant derefrence(obtain the address of a data item held in another location from (a pointer).) t
       his particular pointer.

                 int a = 1025;
                 int *p;
                 p = &a;
                 void *p0;
                 p0=p;
                 printf("Address = %d, Value = %d",*p0);

       Since, its not pointing to anything it will generate error
       WE can only print address

                 printf("Address = %d, Value = %d",p0); <- valid

       Now again in this also we cannot do arithmatic operation

                 printf("Address = %d, Value = %d",p0+1); <- in-valid

   */
  void *p0;
  p0 = p;
  printf("\nAddress = %d, Value = %d", p0);
}
