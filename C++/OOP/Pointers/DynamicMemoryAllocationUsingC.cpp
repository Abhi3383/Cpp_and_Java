#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes on stack
    int *p;
    p = (int *)malloc(sizeof(int));
    // malloc function asks for how much memory to allocate in bytes
    // sizeof(int) we are saying give a block of memory which is 4 bytes(which is size of integer).
    // malloc will return a pointer to the starting address of the block
    // and malloc return a void pointer.
    // malloc looks for free space in the heap book set or reserved set and give back to the pointer
    // and the only way you can access this particular block by keeping a pointer variable which will be local
    // we have done typeCasting here because malloc return pointer to void pointer and p is an intger pointer.
    // now p stores the address of this block of memory.
    // sizeof(int) -> store a block of memory in heap
    // int * -> pointing to the address in the heap from the stack since malloc returns void pointer and we cannot access
    //          it so first we converted it into integer pointer using typecasting then we store the address of the block of memory
    //          which is in heap using pointer varaible who will be pointing to the address from the stack.
    *p = 10;
    printf("Address = %d, Value = %d", p, *p);

    // if we again aloocate the memory using same pointer variable then it will create new block of memory with another address instead of
    // over riding and changing the previously allocated address and value
    // It will not be cleared off automatically
    // Which is an unnecessary consumption of memory.
    p = (int *)malloc(sizeof(int));
    *p = 20;
    printf("\nAddress = %d, Value = %d", p, *p);

    // So once we are done using a particualar block memory we should have made a call to the function "free"
    // So that any memory which is allocated using malloc is cleared off
    free(p);
    p = (int *)malloc(20 * sizeof(int));
    *p = 30;
    printf("\nAddress = %d, Value = %d", p, *p);

    return 0;
}
