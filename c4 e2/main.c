#include <stdio.h>

int main() {
    int x = 0;
    int numt = 0;
    int numplus = 0;
    int enter = 0;
    printf("how many numbers do you want to enter?");

    scanf("%d", &enter);
    do {
        printf("enter a number: ");

        scanf("%d", &numplus);
        x++;
        if (x == enter) {
            printf("Your total is: ");
            printf("%d",numt);
        }
    } while (x < enter);
    {
    numt = numt + numplus;

    printf(&x);
    }
    printf("your total is: ",numt);
}