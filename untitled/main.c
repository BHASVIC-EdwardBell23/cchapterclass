#include <stdio.h>

int main() {
    int nums[5],i;
    for(i=0;i<5;i++);
    {
        printf("input a number : ");
        scanf("%d",&nums[i]);
    }
    printf("\n");
    for (i=5;i>0;i--) {
       printf("\n%d", nums[i]);
   }
}
