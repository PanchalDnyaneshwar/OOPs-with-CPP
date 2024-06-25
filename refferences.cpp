#include<iostream>
using namespace std;

 void changeValue (int& value){
       value++;
 }

int main(){

    // Refference is alternative name for existing variable.

    int a = 4;
   // int& name = a;
   cout << a << endl;
     changeValue(a);
    //cout << name << endl;
    cout << a << endl;

}