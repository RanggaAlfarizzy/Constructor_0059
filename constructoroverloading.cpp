#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
int nim;
string nama;
public:
mahasiswa();
mahasiswa(int);
mahasiswa(string);
mahasiswa(int iNim, string iNama);
void cetak();
};

mahasiswa ::mahasiswa(){}

mahasiswa ::mahasiswa(int iNim){
    nama = iNim; // definisi hanya NIM
}

mahasiswa ::mahasiswa(string iNama){
    nama = iNama; // definisi hanya Nama
}

mahasiswa ::mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi NIM dan Nama
    nama = iNama;
}

void mahasiswa::cetak(){

    cout << endl << "Nim = " <<nim << endl;
    cout << "Nama = " << nama << endl;
}