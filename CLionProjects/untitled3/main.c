#include <stdio.h>
#include <ctype.h>

int main() {
    char userchoice;
    int num1=4;
    int num2=6;
    int numA;
    printf("pick a,b,c or d: ");
    scanf("%c", &userchoice);
    tolower(userchoice);
    switch (userchoice) {
        case 'a':
            printf("you have chosen add.  ");
            numA= num1+num2;
            printf("Your number is ");
            printf("%d",numA);
            break;
        case 'b':
            printf("you have chosen subtraction");
            numA= num1-num2;
            printf("your number is ");
            printf("%d",numA);
            break;
        case 'c':
            printf("you have chosen multiplication");
            numA= num1*num2;
            printf("your number is");
            printf("%d",numA);
            break;
        case 'd':
            printf("you chose division");
            numA= num1/num2;
            printf("your number is ");
            printf("%d",numA);
            break;
        default:
            printf("use the right letter");
            break;
    }
}