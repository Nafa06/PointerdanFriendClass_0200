#include <iostream>
#include <string>
using namespace std;

class Siswa;
class Orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class Siswa;
};

class Siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(Orang &a);
};

void Orang::setNama(string pNama){
    nama = pNama;
};

void Siswa::setId(int pId){
    id = pId;
};

void Siswa::displayAll(Orang &a){
    cout << id << endl << a.nama;
}

int main(){
    Orang joko;
    joko.setNama("Joko Susilo");
    Siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}
