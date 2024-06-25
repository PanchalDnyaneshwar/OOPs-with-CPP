#include<iostream>
using namespace std;

// constructor and Destructor in c++.

class abc {
    int a;
    int b;
    public:
    abc(int v, int w){    //Constructor name is same as class name
          a= v;
          b= w;
           cout << "the object is created" << endl;
    }
    void  getData(){
        cout << a << endl << b << endl;
    }

    ~abc(){     //DeConstructor name is also same as class name run at end of scope of main function
        cout << "the object is destroyed" << endl;
    }
};

int main(){
    
    abc ob(5,7);
    ob.getData();


}