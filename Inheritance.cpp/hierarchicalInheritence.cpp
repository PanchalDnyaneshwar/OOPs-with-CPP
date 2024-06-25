#include <iostream>
using namespace std;

class a{
    public:
    void print(){
        cout << "i am from A class" << endl;
    }
};

class b : public a{
    public:
     void show(){
        cout << "i am  from B class" << endl;
    }
};

class c : public a{
    public:
     void show(){
        cout << "i am  from c class" << endl;
    }
};


int main (){

// hierarchical inheritance  is a concept where multiple derived classes inherit from a single base class.

 b ob1;
 ob1.print();
 ob1.show();

 c ob2;
 ob2.print();
 ob2.show();

}