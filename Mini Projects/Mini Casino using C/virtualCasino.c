/* "Simple Betting Game"
 - "Jack Queen King" - Computer shuffles these cards
 - player has to guess the position of queen.
 - if he wins, he takes 3*bet
 - if he looses, he looses the bet amount.
 - player has $100 initially
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void Play(int bet)
{
    char *c = (char *)malloc(10000 * sizeof(char));
    c[0] = 'J';
    c[1] = 'Q';
    c[2] = 'K';
    printf("Shuffling......\n");
    srand(time(NULL));
    int i;
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = c[x];
        c[x] = c[y];
        c[y] = temp; // swaps characters at x and y
    }

    int playersGuess;
    printf("What's the position of queen - 1,2 or 3 ?");
    scanf("%d", &playersGuess);
    if (c[playersGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You win ! Result = \"%c %c %c\" Total cash = %d\n", c[0], c[1], c[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %c\" Total cash = %d\n", c[0], c[1], c[2], cash);
    }
    free(c);
}

int main()
{
    int bet;
    printf("**Welcome to the virtual casino**\n\n");
    printf("Total cash = $%d\n", cash);

    while (cash > 0)
    {
        printf("What's your bet ? $");
        scanf("%d", &bet);
        while (cash > 0)
        {
            if (bet == 0 || bet > cash)
                break;
            Play(bet);
            printf("\n----------------------------------\n");
        }
    }
}