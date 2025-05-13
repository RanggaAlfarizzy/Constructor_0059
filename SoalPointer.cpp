// Buatlah sebuah class bernama bangunDatar yang memiliki
// member sebagai berikut:
// Panjang,lebar, , method hitunganLuas dan hitungKeliling
// buatlah class persegiPanjang
// buatlah friend function untuk method hitungluas dan hitungkeliling
// gunakan pointer untuk mengggunakan method yang ada pada class

#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class BangunDatar;

class PersegiPanjang
{
public:
    void inputData(BangunDatar &bd);
    void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){ 
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public:
        //untuk  mengakses panjang dan lebar
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        //
        friend void PersegiPanjang::outputData(BangunDatar &bd);
};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bd.lebar;
}