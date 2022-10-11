//Nama: Yoel Yhokhanan Sianipar
//NRP : 5022221081
//Jurusan: Teknik Elektro

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float vt, v0, d;


    if (1<vt<10)
    {
        v0 = vt - 1;
    }
    if (11<vt<20)
    {
        v0 = vt -3;
    }
    if (21<vt<30)
    {
        v0 = vt -5;
    }

    //code untuk mencari jarak maksimum

    d = v0*v0/10;

    cin >> vt;
    cout << d << endl;

}
