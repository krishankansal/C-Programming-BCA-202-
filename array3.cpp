#include <stdio.h>

int main()
{

    int x[5] = {10, 20, 30, 40, 50};

    printf("x[0] = %d", *x);
    printf("\t\t Adress is %u \n", x);
    printf("\t Adress is %u \n", &x[0]);

    printf("\n\n\n\n\n");

    return 0;
}
