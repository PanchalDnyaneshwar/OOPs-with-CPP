#include<iostream>
using namespace std;

// mutotors , inspectors , facilitators
class car {
    int model;
    string name;
    string color;
    string brand;

    // Mutators/setter :- set data into properties or change the data.

    public:
    void setData(int m, string n, string c, string b){
        model = m;
        name = n;
        color = c;
        brand = b;
    }

    // Inspector/getter :-  to show all properties values and inspect the properties of object.

    int getModel(){
      return model;
    }

    // Facilitator :- add the additional functionality of objects properties.

    void report(){
        cout << "This car manufactured by " << brand << " And its model no. is " << model <<
         " Also car named to " << name << " And this car beautifully colored with color with " << color << endl;
    }

};

int main(){

    car alto;
    alto.setData(14, "Vitara Breeza", "Black", "Tata Motors" );
    cout << "this model of alto is " << alto.getModel() << endl;
    alto.report(); 

    car scarpio;
    scarpio.setData(47, "Scarpio XUV", "Light green", "Mahindra & Mahindra");
      cout << "this model of alto is " << scarpio.getModel() << endl;
      scarpio.report();


}