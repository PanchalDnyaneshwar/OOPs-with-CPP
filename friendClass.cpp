#include <iostream>
using namespace std;

class suresh{
    string topScrect = "I am a Engineer";
    //friend class sham;

    friend void getTopScrectBySham( suresh ob);
};

void getTopScrectBySham( suresh ob){
  cout << ob.topScrect << endl;
}

//  class sham{
//     public:
//     void getTopScret(suresh ob){
//            cout << ob.topScrect << endl;
//     }
// };

int main(){
    
    // cannot access directly whithout friend function.
    // suresh ob;
    // sham sh;
    //  sh.getTopScret(ob);
     suresh ob;
    getTopScrectBySham(ob);

    
}