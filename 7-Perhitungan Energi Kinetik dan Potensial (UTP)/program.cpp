#include <iostream>
using namespace std;

int main (){
    /*Saya Muhamad Bayu Fadayan dengan NPM 065121100
    Mengerjakan UTP Algotitma dan Pemrograman dasar dengan jujur*/
    //pendeklarasial setiap variabel dan konstanta
    float m1, m2, k, p;
    string r1, r2;
    const int v = 20;
    const int h = 5;
    const int g = 10;
    //input bagian energi kinetik
    cout << "Diketahui : \nv = "<<v<<" m/s\nh = "<<h<<" m\ng = "<<g<<" m/s^2"<<endl;
    cout << "\nMasukan Massa untuk menghitung energi kinetik : ";cin >> m1;
    cout << "Masukan Rumus Energi Kinetik : ";cin >> r1;
    //perhitungan energi kinetik
    k = m1*v*v/2;
    //output energi kinetik
    cout << "\nEnergi Kinetik Karandev : \n==== ["<<k<<" jooule] ===="<<endl;
    //input bagian energi potensial
    cout << "\nMasukan Massa untuk menghitung energi potensial : ";cin >> m2;
    cout << "Masukan Rumus Energi Potensial : ";cin >> r2;
    //perhitungan energi potensial
    p = m2*g*h;
    //
    cout << "\nEnergi Potensial Karandev : \n==== ["<<p<<" jooule] ===="<<endl;
    //output energi potensial
    cout << "\n\nMUHAMAD BAYU FADAYAN\nUTPALGO\n"<<endl;
    return 0;
}