// strcpy function
#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "C-Programming";
    char y[20];
    printf("\n Before Copy x= %s", x);
    printf("\n Before Copy y= %s", y);
    strcpy(y, x);
    printf("\n After Copy x= %s", x);
    printf("\n After Copy y= %s", y);

    printf("\n\n\n");
    return 0;
}

