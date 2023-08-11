#include <iostream>
#include <conio.h>
using namespace std;

void header (){
    cout << "============================="<<endl;
    cout << "----KONVERSI SUHU CELCIUS----"<<endl;
    cout << "============================="<<endl;
}

void akhiran(){
    cout << "\n\nFungsi katagori sulit by"<<endl;
    cout << "MUHAMAD BAYU FADAYAN_065121100"<<endl;
}

float konversiR (float c){
    float r = c*4/5;
    return r;
}
float konversiF (float c){
    float f = (c*9/5)+32;
    return f;
}
float konversiK (float c){
    float k = c+273;
    return k;
}

void tampil (float c){
    float r, f, k;
    r = konversiR(c);
    f = konversiF(c);
    k = konversiK(c);
    cout << endl;
    cout <<c<<" Celcius akan bernilai : "<<endl;
    cout << "Reamur\t\t: "<<r<<" R"<<endl;
    cout << "Fahrenheit\t: "<<f<<" F"<<endl;
    cout << "Kelvin\t\t: "<<k<<" K"<<endl;
}

int main (){
    float c,r,f,k;
    string ulang;

    do
    {
    system("cls");
    
    header();
    cout << "masukan nilai celcius : "; cin >> c;
    tampil(c);
    akhiran();

    cout << "\nUlang [y/n]? "; cin >> ulang;
    } while (ulang == "y");

    cout << "Terima Kasih"<<endl;

    getch();
    return 0;
}