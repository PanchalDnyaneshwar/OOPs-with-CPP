#include<iostream>
using namespace std;
//default arguments and inline functions

class calculator {
    public:
     int sum (int x = 0 , int y = 0, int z = 0){  //assigning the default argument to each variable.
        return x+y+z;
    }
     inline int sum1 (int x = 0 , int y = 0, int z = 0){  //inline function working is replace body part instead of calling.
        return x+y+z;
    }
};


int main(){

    calculator obj;
    cout << obj.sum(12,36) << endl;
    cout << obj.sum1(12,36) << endl;

}