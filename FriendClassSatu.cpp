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
    int nilai;

public:
    void setId(int pId);
    void displayAll(Orang &a);
};