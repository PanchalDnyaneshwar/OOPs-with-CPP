
//Operator OverLoading in c++
//
#include<iostream>
using namespace std;
class ABC {

    public:
    int a = 5;

    // ABC addObject (ABC ob){
    //     ABC temp;
    //     temp.a = a + ob.a;
    //     return temp;
    ABC operator+ (ABC ob){
        ABC temp;
        temp.a = a + ob.a;
        return temp;
    }
};

int main(){
//    int a = 10 , b = 12;
//    int res = a + b;
//    cout << res << endl;
       
       ABC ob1;
       ABC ob2;

      // ABC ob3 = ob1.addObject(ob2);
      ABC ob3 =  ob1 + ob2;

       cout << ob1.a << endl;
      cout << ob2.a << endl;
       cout << ob3.a << endl;
}
