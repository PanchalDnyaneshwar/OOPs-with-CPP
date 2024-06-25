#include<iostream>
#include<typeinfo>
using namespace std;
// Run-Time Type Information.

class base{
  virtual void fun(){

  }
};

class derived : public base{

};

int main(){

   base *ptr = new derived();
   const type_info &t = typeid(*ptr);
  
   derived d;
   const type_info &drvd = typeid(d);
   
   cout << t.name() << endl;
   cout << drvd.name() << endl;

}