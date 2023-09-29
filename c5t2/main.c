#include <stdio.h>

int main() {
    int x;
    int cube = 0;
    printf("pick a number");
    fflush(stdin);
    scanf("%d", &cube);
    for(x=1;x<cube;x++)
    {
        printf("\n%d", (x*x*x));
    }
}
