#include <iostream>
using namespace std;

void printAddress(int *n);

int main()
{
    int n = 4;
    printAddress(&n);
    // printf("Address of n is: %u\n", &n);
    // printf("Address of n is: %p\n", &n);
    cout <<"Address of n = " << (unsigned long)&n <<endl;

}

void printAddress(int *n)
{
    cout <<"Address of n in function = " << (unsigned long)n <<endl;
}
