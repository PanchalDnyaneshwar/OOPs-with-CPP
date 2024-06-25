#include <iostream>
using namespace std;

class xyz {
  int a;
  public:
  xyz(int val){
    a = val;
  }
  xyz (xyz &ob){
    a = ob.a;
  }
  void showData(){
    cout << a << endl;
  }
};

int main(){

    // copy Constructor used in C++ for create a copy of Object.

    // int v1 = 4;  copy the variable as like this.
    // int v2 = v1;
    // cout << v1 << " " << v2 << endl;

    xyz obj1(15);
    xyz obj2 = obj1;
    obj2.showData();


}