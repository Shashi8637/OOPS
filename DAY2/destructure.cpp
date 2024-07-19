#include<bits/stdc++.h>
using namespace std;


//destructor :- destructor is release only dynamically data or stored which is stored in heap memory;
//it is not responsible to delete data from stack memory;

class Customer{
    string name;
    int *balance;
    public:

    Customer(){
        name = "4";
        cout<<"constructor is 4\n";
    }





    Customer(string name){
    //    name = "shashi";
    //     balance = new int;
    //     *balance = 1000;
    //     cout<<"cunstuctor is called\n";
    this->name = name;
    cout<<"constructor is "<<name<<endl;
        
    }
    ~Customer(){
        cout<<"desturctor is "<<name<<endl;
    }

};
 
int main()
{

 Customer A1("1"),A2("2"),A3("3");

 //dynamically create object and release;
 Customer *A4 = new Customer;
 delete A4;

 
 
    return 0;
}