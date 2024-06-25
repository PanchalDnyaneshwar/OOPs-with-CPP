#include<iostream>
using namespace std;



int main(){

    // HEAP memory use at run time and ex. variable in laptop and its work manually
    //STACK memory use at compile time ex. variable in code and its work automatically

    int a = 5;
    int *ptr = new int;
    *ptr = 20;
    cout << *ptr << endl;

    delete ptr;
}