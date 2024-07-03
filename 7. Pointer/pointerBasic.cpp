#include<iostream>
using namespace std;

int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    cout << "X = " << x << endl;
    cout << "*ptr = " << *ptr <<endl;


    return 0;
}