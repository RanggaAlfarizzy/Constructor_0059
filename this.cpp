#include <iostream>
using namespace std;
class buku{
string judul;

public:
    string setget(string jdl){
        this->judul = jdl; // nilai parameter 'Judul' untuk member variabel 'judul'
        return this->judul; // return variabel jujdul.
    }
};

int main()
{
    buku bukunya;
    cout<<bukunya.setget("Matematika");
    return 0;
}