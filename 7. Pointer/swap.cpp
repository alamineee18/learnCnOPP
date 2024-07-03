#include <iostream>
using namespace std;

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 7, y =5;
    
    printf("x = %d & y = %d\n", x, y);
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    return 0;
}

//Call by value
void swap(int a, int b)
{
    int t = a;
    a=b;
    b=t;
    printf("a = %d & b = %d\n", a, b);
}

// Call by reference
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}