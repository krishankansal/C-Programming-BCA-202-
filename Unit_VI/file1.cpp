/* Display contents of a file on screen. */
#include "stdio.h"
main()
{

    FILE *fp;
    char ch;
    fp = fopen("a.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}




