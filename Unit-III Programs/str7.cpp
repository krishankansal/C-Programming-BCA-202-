// TO COUNT THE TOTAL NUMBER OF OCCURANCES OF A CHARACTERS
// IN STRING ENTERED BY USER
#include <stdio.h>

int main()
{
    char c[25] = "vivek vermavv";
    char *p = &c[0]; // we can also write c only
    int count = 0;
    while (*p != '\0')
    {
        if (*p == 'v')
        {
            count++;
        }
        p++;
    }
    printf("v occurs %d times", count);
    printf("\n\n\n");
    return 0;
}


