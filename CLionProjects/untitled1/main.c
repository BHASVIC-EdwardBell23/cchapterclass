#include <stdio.h>

int main()
{
    int value = 0;
    float value2 = 0;
    char value3;
    printf ("enter a number (integer)");
    scanf("%d",&value);
    printf("enter a decimal");
    scanf("%f",&value2);
    printf("enter a letter");
    fflush(stdin);
    scanf("%c",&value3);
    float r1=value-value2;
    printf("value is %f\n",r1);

}
