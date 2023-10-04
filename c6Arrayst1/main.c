#include <stdio.h>

int main() {
    int i,nums[5];
    for(i=0;i<5;i++)
    {
        printf("input a number : ");
        scanf("%d",&nums[i]);
    }
    printf("\n");
    for (i=0;i<5;i++) {
       printf("\n%d", nums[i]);
   }
    printf("\n");
    for (i=5;i>0;i--) {
        printf("\n%d", nums[i-1]);
    }
}
