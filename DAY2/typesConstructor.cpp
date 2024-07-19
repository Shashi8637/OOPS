#include<bits/stdc++.h>
using namespace std;

//type of constructor :- default parameterized no perameterized
 
class Student{
    string name;
    int roll;
    int age;

    public:
    //constructor :- object initialized by the constructor. constructor is a like a method but has not  return type its name is similar to a class name.
    //default means has created by creating object if i create a constructor maually then it is not create automatically
    Student(){
        cout<<"constructor is called\n";
        name = "shashi";
        roll = 56;
        age = 23;
    }
    //parameterized means aguments passed by users;
    Student(string name, int age , int roll){
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

   //constructor overloading :- constructor name same but diifrent in parameter
    Student(string name,int age){
        this->name = name;
        this->age = age;
    }
    //inline constructor 
    //constructor can not be redetermined : parameter same
    // inline Student(string n, int a , int r) : name(n),age(a),roll(r){

    // }
    //copy constructor
    Student(Student &B){
        name = B.name;
        age = B.age;
        roll = B.roll;
    }
   

    //only display function
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<endl;
    }
};




 
int main()
{

  Student s1;
  Student s2("souvik",20,01);
  Student s3("rohit",8);
  Student s4(s2); 
  Student s5;
  //assignment operator
  s5 = s3;



  s1.display();
  s2.display();
  s3.display();
  s4.display();
  s5.display();
  
 
 
 
    return 0;
}