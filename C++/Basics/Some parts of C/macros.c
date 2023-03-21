#include <stdio.h>
#define LIMIT 5 // 5 is definition of LIMIT
// function like macro
#define AREA(l, b) (l * b) // (l, b) (l * b) is definition of AREA
#define min(a, b) (((a) < (b)) ? (a) : (b))
// Chain Macro
#define YOUTUBE FOLLOWERS
#define FOLLOWERS 776
int main()
{
    printf("Ihe value of LIMIT is %d\n", LIMIT);
    int area = AREA(2, 4);
    printf("Area of rectangle is: %d\n", area);
    printf("Minimun value between %d and %d is %d\n", 5, 10, min(5, 10));
    printf("MySirG have %d k followers on YOUTUBE", FOLLOWERS);
    return 0;
}