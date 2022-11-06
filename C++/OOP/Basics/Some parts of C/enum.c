#include <stdio.h>
enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};
enum State
{
    Working = 1,
    Failed = 0,
    Freezed = 0
};
enum day
{
    sunday = 1,
    monday,
    tuesday = 5,
    wednesday,
    thrusday = 10,
    friday,
    saturday
};
enum state
{
    working,
    failed
};
enum State currState = 2;
int main()
{
    enum week day;
    day = Wed;
    printf("%d\n", day);
    int i;
    for (i = Mon; i <= Sun; i++)
        printf("%d ", i);
    printf("\n%d, %d, %d", Working, Failed, Freezed);
    printf("\n%d, %d, %d %d, %d, %d\n", sunday, monday, tuesday, wednesday, thrusday, friday, saturday);
    (currState == Working) ? printf("Working") : printf("Not Working");
    return 0;
}