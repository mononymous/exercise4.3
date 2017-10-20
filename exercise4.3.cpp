/* exercise4.3.cpp  : imput to ASCII. */

//  The task is to have any inputted text convert to ASCII groupings.
//  After the first period, the conversion has to end.

#include <stdio.h>
int main()
{
    char c0, cstop;
    cstop = '.';
    c0 = '\0';
    while( c0 != cstop)
    {
        fprintf(stdout, "Please, input characters.\n");
        fscanf(stdin, "%c", &c0);
        fprintf(stdout, " Letter [%c], ASCII code: %3d.\n", c0, c0);
    }
    return 0;
}