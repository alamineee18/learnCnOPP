#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public: 
    string dept;
    string name;
    string subjct;


    //Non-perameterized
    Teacher(){
        dept = "Electrical Engineering";
    }

    //Peremeterized
    Teacher(string name, string dept, string subjct, double salary){
        this-> name = name;
        this-> dept = dept;
        this-> subjct = subjct;
        this-> salary = salary;
    }

    void changeDept(string newDept){
        dept = newDept;
    }
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subjct << endl; 
    }
};

int main()
{
    Teacher t1("Alamin", "EEE", "C++", 25000);
    t1.getInfo();
}
