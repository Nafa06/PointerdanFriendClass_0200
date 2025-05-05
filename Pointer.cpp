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
    

}