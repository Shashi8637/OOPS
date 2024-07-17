#include<bits/stdc++.h>
using namespace std;
 

 class Student{
    //public means anyweare can access
    public:
    string name;
    int age;
    int roll_no;
    
 };
int main()
{

Student s1;
s1.name = "Shashi";
s1.age = 22;
s1.roll_no = 56;

cout<<"Name: "<<s1.name<<endl;
cout<<"Age: "<<s1.age<<endl;
cout<<"Roll No: "<<s1.roll_no<<endl;


 
 
 
    return 0;
}