#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa(); //Constructor
};

mahasiswa::mahasiswa(){
    cout<<"Constructor Terpanggil"<<endl; // definisi Constructor
    };
    
    int main(){
        mahasiswa mhs; //Pembuatan Object
    
        return 0;
    }

