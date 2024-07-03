#include <iostream>
using namespace std;

class Test
{ 
public:
    int firstNumber;
    int secondNumber;

    Test(int i, int j) 
    {
        firstNumber = i;
        secondNumber =j; 
    }

    int sum(){
        int sum = firstNumber + secondNumber;
        return sum;
    }
};

int main()
{
    Test t(20, 30);
    cout << t.sum() << endl; // Corrected the call to sum() method
    return 0;
}
