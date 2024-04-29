/* Count chars, spaces, tabs and newlines in a file */
#include "stdio.h"
main()
{
    FILE *fp;
    char ch;
    int nol = 0, notab = 0, nob = 0, noc = 0;

    fp = fopen("a.txt", "r");

    while (1)
    {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        noc++;

        if (ch == ' ')
            nob++;

        if (ch == '\n')
            nol++;

        if (ch == '\t')
            notab++;
    }

    fclose(fp);
    printf("\n Number of characters = %d", noc);
    printf("\n Number of blanks = %d", nob);
    printf("\n Number of tabs = %d", notab);
    printf("\n Number of lines = %d", nol);
}
