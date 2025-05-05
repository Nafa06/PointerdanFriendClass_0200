#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void ShowNim(){
        cout << "No Induk " << nim << endl;
    }
};

int main(){
    Mahasiswa mhs;
    mhs.nim = 5;
    mhs.ShowNim();

    Mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.ShowNim();

    Mahasiswa *pMhs= &mhs;
    pMhs->nim = 3;
    pMhs->ShowNim();
    return 0;
}