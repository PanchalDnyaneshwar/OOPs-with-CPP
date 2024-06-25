#include<iostream>
using namespace std;

class CPU{
    string model;
    public:
    void setModel(string m){
        model = m;
    }
    string getModel(){
        return model;
    }
};

class RAM{
    int size;
    public:
    void setModel(int s){
        size = s;
    }
    int getModel(){
        return size;
    }

};

class HardDisk{
    int HardSize;
    public:
    void setModel(int h){
        HardSize = h;
    }
    int getModel(){
        return HardSize;
    }

};

class computers{
    CPU cpu;
    RAM ram;
    HardDisk rom;

    public:
    void setComputers(CPU c, RAM r, HardDisk ro){
        cpu = c;
        ram = r;
        rom = ro;

    }
      void getComputers(){
        cout << cpu.getModel() << endl;
        cout << ram.getModel() << " GB" << endl;
        cout << rom.getModel() << " TB" << endl;
        
    }
};

int main(){

    // Composition in C++ is 
    CPU i5;
    i5.setModel("Intel i5 11th Gen");
    RAM samsungRam;
    samsungRam.setModel(8);
    HardDisk samsung;
    samsung.setModel(1);

    // cout << i5.getModel() << endl;
    // cout << samsungRam.getModel() << endl;
    // cout << samsung.getModel()<< "TB"<< endl;

    computers acer;
    acer.setComputers(i5, samsungRam, samsung);
    acer.getComputers();
    
}