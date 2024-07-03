#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;

    int **pptr = &ptr;

    cout << "i = " << i <<endl;
    cout << "&i = " << &i <<endl;

    cout << "ptr = " << ptr <<endl;
    cout << "*ptr = " << *ptr <<endl;
    cout << "&ptr = " << &ptr <<endl;

    cout << "pptr = " << pptr <<endl;
    cout << "*pptr = " << *pptr <<endl;
    cout << "**pptr = " << **pptr <<endl;
    cout << "&pptr = " << &pptr <<endl;
    

}