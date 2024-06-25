#include<iostream>
using namespace std;
// Dynamic Array of Objects

class employee{

 int id;
 string name;

 public:
 void setData(){
    cout << "enter your id" << endl;
    cin >> id;
    cout << "enter your name" << endl;
    cin >> name;
 }

 void getData(){
    cout << "The id is :- " << id << endl; 
    cout << "The name is :- " << name << endl;
 }
 
};


int main(){
  
//   int *ptr = new int[5];
// ptr[0] = 5;
// ptr[1] = 12;
// ptr[2] = 21;
// ptr[3] = 41;

//  cout << ptr[0] << endl;
//  cout << ptr[1] << endl;
//  cout << ptr[2] << endl;
//  cout << ptr[3] << endl;

//  delete[] ptr;

employee *ptr = new employee[3];
 for (int i=0; i<3; i++){
    ptr[i].setData();
 }

 for (int i=0; i<3; i++){
    ptr[i].getData();
 }

 delete[] ptr;
}