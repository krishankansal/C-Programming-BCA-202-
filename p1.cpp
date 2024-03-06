#include <stdio.h>

int main()
{

    int a = 10;
    int *p = &a;
    int **pp = &p;
    double f = 2.3;
    double *pf = &f;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", *(&a));
    printf("Address of a = %u\n", &a);
    printf("Address of a = %u\n", p);
    printf("Address of pointer = %u\n", &p);
    printf("Address of pointer = %u\n", pp);
    printf("size of pointer = %u\n", sizeof(a));
    printf("\n\n\n\n");

    return 0;
}