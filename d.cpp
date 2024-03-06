// POINTER TO AN ARRAY
#include <stdio.h>
int main()
{
    float x[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *ptr = x; // we can also write &x[0];
    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %f \n", i, *ptr);
        printf("Address x[%d] = %u \n", i, ptr);

        ptr++;
    }

    printf("\n\n\n\n\n");
    return 0;
}

