
// Define Multiple Functions with Same name but diffrent Pararmeters lists.

#include<iostream>
using namespace std;

class addition{
    public:
 void add(int a, int b){
    cout << "Integer Type Parameters passed to function" << endl;
    cout << a + b << endl;
 }

 void add(float a, float b){
    cout << "Float Type Parameters passed to function" << endl;
    cout << a + b << endl;
 }

 void add(float a, int b){
    cout << " Float + Integer Type Parameters passed to function" << endl;
    cout << a + b << endl;
 }

 void add(int a, float b){
    cout << "Integer + Float Type Parameters passed to function" << endl;
    cout << a + b << endl;
 }
};

int main(){

     addition ob;
     ob.add(8,12);

     ob.add(8.5f,12);

     ob.add(0.5f,12.9f);

     ob.add(8,10.66f);


}