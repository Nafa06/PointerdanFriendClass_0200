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

