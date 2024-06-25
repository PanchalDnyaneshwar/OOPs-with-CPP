// Virtual Function
#include <iostream>
using namespace std;

class  first{  // Base class
    public:
     virtual void show(){
        cout << "I am from First class" << endl;
    }

 };

 class second : public first{  // derived class from first class
     public:
     void show(){  // function overriding.
        cout << "I am from Second class" << endl;
    }

 };

int main(){

    second ob;
    first *pt = &ob;   // ways of access the variable.
    ob.show();
    pt -> show();



}
    
