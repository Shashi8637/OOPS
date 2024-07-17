#include<bits/stdc++.h>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int roll_no;
    
    public:
    void setName(string n){
        name = n;
    }
    void setAge(int a){
       age = a;
    }

    void setRollno(int r){
       roll_no = r;
    }

    void getName(){
        cout<<name<<"\n";
    }

    void getAge(){
        cout<<age<<"\n";
    }

    void getRollno(){
        cout<<roll_no<<"\n";
    }

    

};




 
int main()
{

 Student s1;
 s1.setName("shashi");
 s1.setAge(22);
 s1.setRollno(56);

 s1.getName();
 s1.getAge();
 s1.getRollno();


 
 
    return 0;
}