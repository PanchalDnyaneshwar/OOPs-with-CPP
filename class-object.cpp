#include <iostream>
using namespace std;

 // class is nothing but the user defined data type that has data members and member functions.
    // An object is nothing but the instance of an class.


class car {

    //properties
    int model;
    string name;
    int noOfWheels;
    int noOfMirrors;

    //behaviour
    public:
    void cameraFunction(){
        cout << "Camera is Working !" << endl; 
    }

};

  int main(){
    car alto;
    alto.cameraFunction();
  }




   
    