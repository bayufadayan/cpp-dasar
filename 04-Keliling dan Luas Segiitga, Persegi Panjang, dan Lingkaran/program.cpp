#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    cout << "====================================================="<<endl;
    cout << "--------MENGHITUNG KELILING DAN LUAS SEGITIGA--------"<<endl;
    cout << "=====================================================\n";

    cout << "Keliling Segitiga = A + B + C"<<endl;
    cout << "Luas Segitiga = a x t /2"<<endl;
    cout << "-----------------------------------------------------"<<endl;

    //pendeklarasian
    float a, b, c, t, kel1, luas1;

    //proses input data
    //asumsikan sisi A sama dengan alas
    cout << "Masukkan sisi A = ";
    cin >> a;
    cout << "Masukkan sisi B = ";
    cin >> b;
    cout << "Masukkan sisi C = ";
    cin >> c;
    cout << "Masukkan Tinggi = ";
    cin >> t;

    //Perhitungan
    kel1 = a + b + c;
    luas1 = a*t/2;

    //hasil
    cout << "\nKeliling segitiga adalah "<<kel1<<" cm"<<endl;
    cout << "Luas segitiga adalah "<<luas1<<" cm2\n\n";

    cout << "====================================================="<<endl;
    cout << "-----MENGHITUNG KELILING DAN LUAS PERSEGI PANJANG----"<<endl;
    cout << "=====================================================\n";

    cout << "Keliling Persegi panjang = 2 (P + L)"<<endl;
    cout << "Luas Persegi panjang = P x L"<<endl;
    cout << "-----------------------------------------------------"<<endl;

    //pendeklarasian
    float p, l, kel2, luas2;

    //proses input data
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukan lebar = ";
    cin >> l;

    //Perhitungan
    kel2 = 2*(p+l);
    luas2 = p*l;

    //hasil
    cout << "\nKeliling persegi panjang adalah "<<kel2<<" cm"<<endl;
    cout << "Luas persegi panjang adalah "<<luas2<<" cm2\n\n";

    cout << "====================================================="<<endl;
    cout << "-------MENGHITUNG KELILING DAN LUAS LINGKARAN--------"<<endl;
    cout << "=====================================================\n";

    cout << "Keliling Lingkaran = 2 x pi x r"<<endl;
    cout << "Luas Lingkaran = pi x r x r"<<endl;
    cout << "-----------------------------------------------------"<<endl;

    //pendeklarasian
    float r, kel3, luas3;
    const float pi = 3.14;

    //input data
    cout << "Masukkan jari-jari = ";
    cin >> r;

    //perhitungan
    kel3 = 2*pi*r;
    luas3 = pi*r*r;

    //hasil
    cout << "\nKeliling lingkaran adalah "<<kel3<<" cm"<<endl;
    cout << "Luas lingkaran adalah "<<luas3<<" cm2\n\n";

    cout << "MUHAMAD BAYU FADAYAN_065121100\n\n";

    getch ();
    return 0;
}