#include <iostream>
using namespace std;

// Exception handling in C++
// using keywords Try, Throw, Catch.

int main()
{
    int a, b;
    int result = 0;
    try
    {
        cout << "enter the value of a and b" << endl;
        cin >> a >> b;
        if (b == 0)
        {
            //throw 'b';
            throw runtime_error("Divided by zero!");
        }
        int result = a / b;
    }
    catch (int x)
    {
        cout << "please do not enter input value is 0" << b << endl;
    }
    catch( exception& e){
        cout << e.what() << endl;
    }
    // catch(...){ //2nd way
    //     cout << "This is second catch block" <<endl;
    // }
    cout << "Calculating The Result" << endl;
    cout << result;
}