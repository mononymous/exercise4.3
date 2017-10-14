/* exercise4.3.cpp  : imput to ASCII. */

//  The task is to have any inputted text convert to ASCII groupings.
//  After the first period, the conversion has to end.

#include <stdio.h>
int main()
{
    int i;
    char str[100] = "Yamaguchi University.\n";
    fprintf(stdout, "Printing str:\n   ");
    i=0;
    while( str[i] != '\0' )
    {
        fprintf(stdout, " %2d. Character: < %c [ASCII: %3d(10), %x(16)]>\n", i+1, str[i], str[i], str[i]);
        i=i+1;
    }
    
    fprintf(stdout, "17-1401-023-3 Kenta Kawaguchi.\n" );
    
    return 0;
}
