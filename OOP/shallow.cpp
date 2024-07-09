#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    /* data */
public:
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "CGPS : " << cgpa << endl;
    }
};

int main()
{
    Student s1("Alamin Kabir", 3.0);
    s1.getInfo();
}


