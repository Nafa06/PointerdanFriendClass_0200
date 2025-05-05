#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilnama(){
        cout << "Namanya adalah " << nama << endl;
    }
};

class Staff{
    public:
    int nidn;
};

int main(){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilnama();

    Dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat memorinya = " << &dsref << endl;
    dsref.tampilnama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat memorinya = " << pds << endl;
    pds->tampilnama();
    
    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "Alamat memori a = "<< &a << endl;
    cout << "Alamat memori c = "<< c << endl;
    cout << "Cetak c = "<< *c << endl;
    c = &b;
    cout << "Alamat memori c = "<< c << endl;
    cout << "Cetak c = "<< *c << endl;
}