#include <iostream>
using namespace std;

 // Multi-Level Inheritence is a concept where a class is derived from another class,
 // And then another class is derived from the derived class. e.g. A -> B -> C.
 // overwriting or overfunctioning is occurs.
 class first{  // Base class
    public:
    void print(){
        cout << "I am from First class" << endl;
    }

 };

 class second : public first{  // derived class from first class
     public:
     void print(){
        cout << "I am from Second class" << endl;
    }

 };

 class third : public second{  // derived class from derived class second.
     public:


 };

int main(){
   third ob;
   ob.print();
}