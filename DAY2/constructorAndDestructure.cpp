#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int roll;
    int age;
    public:
    //constructor :- object initialixed by the constructor. constructor is a like a method but has not  return type its name is similar to a class name.
    Student(){
        cout<<"constructor is called\n";
    }
    void display(){
        cout<<name<<""<<age<<" "<<roll<<endl;
    }
};




 
int main()
{

  Student s1;
  s1.display();
  
 
 
 
    return 0;
}