#include <stdio.h>

int main() {
    int x;
    int num = 0;
    printf("say a number");
    fflush(stdin);
    scanf("%d",&num);
    for (x = 0; x < 13; x++) {
        printf("\n%d times %d = %d  ", x, num, num*x);
    }
}
