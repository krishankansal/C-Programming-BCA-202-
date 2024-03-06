// BASE ADDRESS OF AN ARRAY
#include <stdio.h>
int main()
{
    int x[5] = {10, 20, 30, 40, 50};
    printf("First element of array is = %d \n", x[0]);
    printf("First element of array is = %d \n", *x);
    printf("Address of first element is = %u \n", x);
    printf("Address of first element is = %u \n", &x[0]);
    printf("\n\n\n\n\n");
    return 0;
}