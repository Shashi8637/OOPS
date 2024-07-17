#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll;
};
 


int main()
{

    //static memory allocation in stack
    Student s1;
    s1.name = "shashi";
    s1.age = 22;
    s1.roll = 56;

    cout<<s1.age<<endl;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;



    cout<<endl;
   





    //dynamic memory allocation and it is in heap memory allocated
    Student *s = new Student;

    (*s).age = 19;
    (*s).name = "souvik";
    (*s).roll = 01;

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->roll<<endl;



 
 
 
    return 0;
}