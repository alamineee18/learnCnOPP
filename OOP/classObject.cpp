#include <iostream>
#include <string.h>
using namespace std;

class Teacher {
private: 
    double salary;

public:   
    string name;
    string dept;
    string subject;

    //constructor
    Teacher()
    {
        dept = "Electrical Engineering";
    }

    //Method or member function
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    }
    //gater 
    double getSalary(){
        return salary;
    }

};

class account
{
private:
    /* data */
    
public:
    
};




int main()
{
    Teacher t1;

    t1.name = "Md. AL-Amin Kabir";
    t1.subject = "C++";
    t1.setSalary(2000);
    
    cout << t1.dept <<"\n";
    
    
} 
