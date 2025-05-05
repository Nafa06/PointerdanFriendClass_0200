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

}