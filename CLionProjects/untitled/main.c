#include <stdio.h>

int main()
{
    int value1 = 0;
    int value2 = 0;
    printf("enter a number");
    scanf("%d",&value1 );
    printf("enter second number");
    scanf("%d",&value2);
    int result = value2*value1;
    printf("value is %d\n",result);
}
