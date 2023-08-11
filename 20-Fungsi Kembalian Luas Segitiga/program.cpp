#include <iostream>
#include <conio.h>
using namespace std;

void header (){
    cout << "==================================================="<<endl;
    cout << "-------------PERHITUNGAN LUAS SEGITIGA-------------"<<endl;
    cout << "==================================================="<<endl;
}

float fungsiluas(float a, float t){
    float luas = a*t/2;
    return luas;
}

void tampilkan(float a, float t){
    float luas = fungsiluas(a, t);
    cout << "---------------------------------------------------"<<endl;
    cout << "Rumus Luas = a x t x 1/2"<<endl;
    cout << "Segitiga dengan alas ["<<a<<" cm] dan tinggi ["<<t<<" cm]"<<endl;
    cout << "Memiliki luas : "<<luas<<" cm^2"<<endl;
    cout << "---------------------------------------------------"<<endl;
}

int main (){
    float a, t;
    char ulang;
    do
    {
        system ("cls");

        header();
        cout <<"Masukan nilai alas = "; cin >> a;
        cout <<"Masukan nilai tinggi = "; cin >> t;
        tampilkan(a,t);

        cout << "Ulang [y/n] ? "; cin >> ulang;
    
    } while (ulang == 'y');

    cout << "Terima kasih"<<endl;
    cout << "MUHAMAD BAYU FADAYAN_065121100\n\n";


    getch ();
    return 0;
}