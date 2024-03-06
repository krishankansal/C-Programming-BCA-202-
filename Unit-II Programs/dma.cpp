// TO CREATE AN ARRAY DYNAMICALLY WITH THE HELP OF MALLOC FUNCTION
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *p = (int *)malloc(5 * sizeof(int));
    int x = 200;
    for (int i = 0; i < 5; i++)
    {
        p[i] = x;
        x++;
    }
    printf("Address of first element =%u \n ", p);
    printf("Content of third element =%d \n ", *(p + 2));
    for (int i = 0; i < 5; i++)
    {
        printf("Value at address %u is %d \n", (p + i), *(p + i));
    }

    printf("\n\n\n\n");
    return 0;
}
