//Variable Rules
/*
1. Variable are case sensitive
2. 1st character is alphaber or '_'
3. no comma / blank space
4. No symbol other then '_'

*/
// Different Data type in C
/*
Data Type                           Size in Byte
char or signed char                     1
unsigned char                           1
int or signed int                       2
unsigned int                            2
short int or unsigned short int         2
signed short int                        2
long int                                4
unsigned long int                       4
float                                   4
double                                  8
long double                             10

*/


#include <stdio.h>
int main()
{
    int number = 25;
    char star = 'a';
    int age = 22;
    float pi = 3.1415;

    printf("%d",sizeof (number) ); // int size = 4 byte

}
