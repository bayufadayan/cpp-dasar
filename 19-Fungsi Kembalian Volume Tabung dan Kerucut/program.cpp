#include <iostream>
#include <conio.h>
using namespace std;

double voltabung (float l, float t){
    double tabung;
    tabung = l * t;
    return tabung;
}

double volkerucut (float l, float t){
    double kerucut;
    kerucut =  l * t/3;
    return kerucut;
}

int main (){
    float l, t;
    cout << "Perhitungan Volume Tabung dan Kerucut"<<endl;
    cout << "Luas alas dan tinggi dari volume tabung dan kerucut di anggap sama"<<endl;
    cout << "Masukan Luas alas = "; cin >> l;
    cout << "Masukan Tinggi = "; cin >> t;

    cout << "volume tabung = ";
    cout << voltabung (l,t) << endl;
    cout << "volume kerucut = ";
    cout << volkerucut (l,t);

    getch ();
    return 0;
}