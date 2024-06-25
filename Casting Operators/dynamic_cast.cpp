//Dynamic Casting in C++
#include <iostream>
using namespace std;

class base{
    public:
    virtual void fun(){

    }
};

class d1 : public base {

};

class d2 : public base{

};

int main(){
    
    // Down Casting is possible through dynamic casting.
    base *ptr = new d1();
    d1 *d = dynamic_cast<d1*>(ptr);

    if (d == nullptr)
    {
        cout << "not works" << endl;
    } else{
        cout << "Its Works" << endl;
    }
    
}