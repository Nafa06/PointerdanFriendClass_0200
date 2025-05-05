#include <iostream>
#include <string>
using namespace std;

class Pelajar;
class Manusia
{
public:
    void ShowNilaiPelajar(Pelajar &x);
    void ShowNilaiPelajarDua(Pelajar &y);
};

class Pelajar
{
private:
    int nilai;

public:
    Pelajar() { nilai = 100; }
    friend void Manusia::ShowNilaiPelajar(Pelajar &x);
};

void Manusia::ShowNilaiPelajar(Pelajar &x)
{
    cout << x.nilai;
};

// void Manusia::ShowNilaiPelajarDua(Pelajar &y)
// {
//     cout << y.nilai;
// };

int main()
{
    Manusia budi;
    Pelajar pbudi;
    budi.ShowNilaiPelajar(pbudi);
    return 0;
}
