#include<iostream>
using namespace std;
// const casting


int main(){

    int a = 10;
    const int *ptr = &a;
    cout << a << endl;

   // *ptr = 12 changing.

   int *pt = const_cast<int *>(ptr);
   *pt = 12;
   cout << a << endl;

}