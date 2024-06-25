// casting operators
// 1. Static_Cast
// 2. Dynamic_Cast
// 3. Const_Cast
// 4. Reinterpret_Cast
#include<iostream>
using namespace std;


int main(){

    float f = 4.7f;
    int a = static_cast<int>(f);

    cout << f << endl;
    cout << a << endl;

}