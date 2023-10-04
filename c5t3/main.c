#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main( ) {
    int guess, r,credits;
    for (credits=9;credits>0;credits--)
    {


        srand(time(NULL));
        r = rand() % 31;

        printf("\n guess a random number 1-30: ");
        fflush(stdin);
        scanf("%d", &guess);
        if (guess == r) {
            credits++;
            if (r % 10 == 0) {
                credits = credits +2;
            }
            if (r == (1 || 2 || 3 || 5 || 7 || 11 || 13 || 17 || 19 || 23 || 29)) {
                credits = credits +4;
            }
            if (r < 5) { // CHANGE IF STATEMENTS TO CASE OR SOMEWAY TO GET COMBOS
                credits = credits +1;
            }
        } else
            printf("\n wrong");
        printf("%d", credits);
    }
}
