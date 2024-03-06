#include <stdio.h>

int main()
{

    int x[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = x;

    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %d", i, *ptr);
        printf("\t\t Adress is %u \n", ptr);
        ptr++;
    }

    printf("\n\n\n\n\n");

    return 0;
}