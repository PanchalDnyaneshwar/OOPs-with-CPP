// template is used to wite generic code....
#include <iostream>
using namespace std;

template <typename DMP>
void addition(DMP x , DMP y){
    cout << x + y << endl;
}

template <typename Last>
class ABC{
   Last num;
   public:
   void setData(Last n){
     num = n;  
      }
    Last getData(){
     return num;
     }
};

int main(){
   
   addition<int>(2,3);
   addition<float>(2.7f,3);
   addition<string>("Dnyaneshwar" , " Panchal");

   ABC <int> ob;
   ABC<string> ob1;

   ob.setData(5);
   ob1.setData("Dnyaneshwar Panchal");

   ob.getData();
   ob1.getData();
}
