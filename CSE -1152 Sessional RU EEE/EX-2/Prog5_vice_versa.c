//lower case to upper case

#include <stdio.h>
#include <ctype.h>
int main ( )
{
    char lower, upper;

    printf ("Enter a lowercase letter : ");
    scanf ("%c", &lower);

    upper = toupper(lower);
    printf ("The uppercase letter = %c", upper);

    return 0;
}
