#include <iostream>
using namespace std;
// this is Base class
class Android {
    protected:
    int version = 14;

    public:
    void os(){
        cout << " I am stock android" << endl;
    }
};
  // inherite the android class into oneui. this is Derived class
class oneUI : public Android{
    public:
    void showAndroidVersion(){
        version = 15;
        cout << version << endl;
    }
};

int main(){

    // base class is existing class.
    // Derived class is new class.
    oneUI s23;
    s23.showAndroidVersion();
}