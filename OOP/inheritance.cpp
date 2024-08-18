//When properties & member function of base class are passws on the derived class
 
 #include<iostream>
 using namespace std;

 class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
 };

 int main()
 {


    return 0;
 }