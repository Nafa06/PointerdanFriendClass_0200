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
    Mahasiswa *mhs = new Mahasiswa{1};
    mhs->nim = 2;
    mhs->ShowNim();
    delete mhs;
    return 0;
}