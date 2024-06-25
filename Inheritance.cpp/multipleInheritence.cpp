#include <iostream>
using namespace std;

class a{
    public:
    void print(){
        cout << "i am from A class" << endl;
    }
};

class b{
    public:
    void print(){
        cout << "i am from B class" << endl;
    }

     void show(){
        cout << "i am also from B class" << endl;
    }
};

class c : public a, public b{
     
};

int main(){

    // multiple Inheritence is concept where A class can be derived from multiple classes. 
    // e.g.  c class is derived from a and b class. 

    c ob;
    ob.a ::  print(); // same function existed in both classes ::
    ob.show();
}