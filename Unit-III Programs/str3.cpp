// TO DISPLAY THE CONTENTS OF STRING USING WHILE LOOP - METHOD-3
#include <stdio.h>

int main()
{
    char c[] = "Rahul";
    char *p = &c[0]; // we can also write c only
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n\n\n");
    return 0;
}

