// Implementation of strcpy function
#include <stdio.h>
void mycopy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
*t = '\0';
}
int main()
{
    char x[] = "C-Programming";
    char y[20];
    printf("\n Before Copy x= %s", x);
    printf("\n Before Copy y= %s", y);
    mycopy(y, x);
    printf("\n After Copy x= %s", x);
    printf("\n After Copy y= %s", y);

    printf("\n\n\n");
    return 0;
}
