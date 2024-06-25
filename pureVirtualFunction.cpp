// a pure virtual function is declared in a base class but has no implementation in that base class.
//used for setting the rule.

// ABSRACT CLASS and PURE VIRTUAL FUNCTION.
#include <iostream>
using namespace std;

class car {    //base class
   public:
   virtual void steeringWheel() = 0;
   virtual void fourWheel() = 0;
};

class alto : public car{
    public:
    void steeringWheel(){
        cout << "Power Steering" << endl;
    }

     void fourWheel(){
        cout << "MRF 12 inches Tyres" << endl;
    }
};

int main(){

    alto ob;
    ob.fourWheel();
    ob.steeringWheel();

}