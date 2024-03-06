// SIZEOF FUNCTION IN C
#include <stdio.h>
int main()
{
    int a = 25;
    int *p = &a;
    printf("Size of a = %d \n", sizeof(a));
    printf("Size of p = %d \n", sizeof(p));
    printf("--------------------\n");
    float f = 10.23;
    float *fp = &f;
    printf("Size of f = %d \n", sizeof(f));
    printf("Size of fp = %d \n", sizeof(fp));
    printf("---------------------\n");
    double d = 20.56;
    double *dp = &d;
    printf("Size of d = %d \n", sizeof(d));
    printf("Size of dp = %d \n", sizeof(dp));
    printf("---------------------\n");
    char c = 'x';
    char *cp = &c;
    printf("Size of c = %d \n", sizeof(c));
    printf("Size of cp = %d \n", sizeof(cp));
    // printf("Value of a = %d \n", *p);
    // printf("Address of a = %u \n", &a);
    // printf("Address of a = %u \n", p);
    // printf("Value of a = %d \n", *(&a));

    printf("\n\n\n");

    return 0;
}