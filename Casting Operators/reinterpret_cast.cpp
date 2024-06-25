#include <iostream>
using namespace std;
// reinterpret casting in c++

int main(){
  
  int a = 10;
  int *ptr = &a;
    cout << a << endl;


  char *ch = reinterpret_cast<char *>(ptr);
  *ch = 'a'; 
   cout << a << endl;

}