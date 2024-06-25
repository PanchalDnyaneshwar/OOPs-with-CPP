#include<iostream>
using namespace std;

class employee {
   int id;
   string name;

   public:
   void setData (){  // mutator
    cout << "Enter the Value of ID :-" <<id <<endl;
    cin >>id;

    cout << "Enter the Value of Name :-" <<name <<endl;
     cin >>name;
   }

   void getData (){         // inspector
     cout << "the id of employee is : " <<id <<endl;
     cout << "the name of employee is : " <<name <<endl;
   }
};

int main(){

    employee emp[4];

    for(int i = 0; i < 3; i++){
         emp[i].setData();
    }

     for(int i = 0; i < 3; i++){
         emp[i].getData();
    }

}