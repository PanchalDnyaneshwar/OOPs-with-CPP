#include <iostream>
using namespace std;

struct student
{
    private:
    int rollno = 5;
     
     public:
    void print(){
        cout << rollno << endl;
    }
};

int main(){

    //insertion operator
    cout << "hello world !" << endl;

    // int a;
    // //extraction operator
    // cout << "enter the value for a";
    // cin >> a;
    // cout << a << endl; 

    student s1;
    //s1.rollno = 21; 
    s1.print();




}