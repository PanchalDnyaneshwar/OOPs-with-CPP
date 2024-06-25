#include <iostream>
using namespace std;
class person
{
    public:
   int id;
   string name;
 static int totalCount;
 person(int d, string n){
    id = d;
    name = n;
    totalCount++;
 }
    void getData(){
        cout << id << endl;
        cout << name << endl;
    }
    static void printData(){
         cout << person:: totalCount << endl;
    }
};

  int person :: totalCount = 0;

int main(){

   person obj1(01,"ram");
   person obj2(02, "sham");

   obj1.getData();
   obj2.getData();

   person::printData();

}