#include <iostream>
using namespace std;

class areaofHouse
{
private: 
    int length;
    int base;
public:
    void setData (int x, int y){
        length = x;
        base = y;
    }

    void Area (){
        cout << "The area of House: " << length * base << endl;
    }

};

int main()
{
    areaofHouse house_1, house_2;
    house_1.setData(200, 100);
    house_1.Area();

    // area of second house 
    house_2.setData(10, 5);
    house_2.Area();

    return 0;
}