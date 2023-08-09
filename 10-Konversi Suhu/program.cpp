#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    cout << "========================================="<<endl;
    cout << "--------------KONVERSI SUHU--------------"<<endl;
    cout << "========================================="<<endl;

    //pendeklarasian
    char dari, ke;
    float c, r, f, k, hasil;

    //input data
    //silakan masukan sesuai yg ada di pilihan
    cout << "[ C    = Celcius   F   = Fahrenheit]"<<endl;
    cout << "[ R    = Reamur    K   = Kelvin    ]"<<endl;

    cout << "\nAnda akan mengkonversi suhu"<<endl;
    cout << "dari [C/R/F/K] : ";
    cin >> dari;
    cout << "ke [C/R/F/K] : ";
    cin >> ke;

    //saya menggunakan if bersarang silakan perhatikan
    if (dari == 'C')
    {
        if (ke == 'R')
        {
            cout << "Anda akan mengonversi suhu dari Celcius ke Reamur"<<endl;
            cout << "\nMasukan nilai Celcius = ";
            cin >> c;

            hasil = c * 4/5;

            cout << c << " celcius = "<<hasil<< " reamur"<<endl;
        }else if (ke == 'F')
        {
            cout << "Anda akan mengonversi suhu dari Celcius ke Fahrenheit"<<endl;
            cout << "\nMasukan nilai Celcius = ";
            cin >> c;

            hasil = (c * 9/5) + 32;

            cout << c << " celcius = "<<hasil<< " fahrenheit"<<endl;
        }else if (ke == 'K')
        {
            cout << "Anda akan mengonversi suhu dari Celcius ke Kelvin"<<endl;
            cout << "\nMasukan nilai Celcius = ";
            cin >> c;

            hasil = c + 273;

            cout << c << " celcius = "<<hasil<< " kelvin"<<endl;
        }
        else
        {
            cout << "\nMaaf input anda salah"<<endl;
            cout << "Jangan lupa untuk menggunakan huruf kapital saat meng-input"<<endl;
        }
        
    }else if (dari == 'R')
    {
         if (ke == 'C')
        {
            cout << "Anda akan mengonversi suhu dari Reamur ke Celcius"<<endl;
            cout << "\nMasukan nilai Reamur = ";
            cin >> r;

            hasil = r * 5/4;

            cout << r << " reamur = "<<hasil<< " celcius"<<endl;
        }else if (ke == 'F')
        {
            cout << "Anda akan mengonversi suhu dari Reamur ke Fahrenheit"<<endl;
            cout << "\nMasukan nilai Reamur = ";
            cin >> r;

            hasil = (r * 9/4) + 32;

            cout << r << " reamur = "<<hasil<< " fahrenheit"<<endl;
        }else if (ke == 'K')
        {
            cout << "Anda akan mengonversi suhu dari Reamur ke Kelvin"<<endl;
            cout << "\nMasukan nilai Reamur = ";
            cin >> r;

            hasil = (r * 5/4) + 273;

            cout << r << " reamur = "<<hasil<< " kelvin"<<endl;
        }else
        {
             cout << "\nMaaf input anda salah"<<endl;
             cout << "Jangan lupa untuk menggunakan huruf kapital saat meng-input"<<endl;
        }
        
    }else if (dari == 'F')
    {
        if (ke == 'C')
        {
            cout << "Anda akan mengonversi suhu dari Fahrenheit ke Celcius"<<endl;
            cout << "\nMasukan nilai Fahrenheit = ";
            cin >> f;

            hasil = (f - 32)* 5/9;

            cout << f << " fahrenheit = "<<hasil<< " celcius"<<endl;
        }else if (ke == 'R')
        {
            cout << "Anda akan mengonversi suhu dari Fahrenheit ke Reamur"<<endl;
            cout << "\nMasukan nilai Fahrenheit = ";
            cin >> f;

            hasil = (f - 32)* 4/9;

            cout << f << " fahrenheit = "<<hasil<< " reamur"<<endl;
        }else if (ke == 'K')
        {
            cout << "Anda akan mengonversi suhu dari Fahrenheit ke Kelvin"<<endl;
            cout << "\nMasukan nilai Fahrenheit = ";
            cin >> f;

            hasil = ((f - 32)* 5/9) + 273;

            cout << f << " fahrenheit = "<<hasil<< " Kelvin"<<endl;
        }else
        {
            cout << "\nMaaf input anda salah"<<endl;
            cout << "Jangan lupa untuk menggunakan huruf kapital saat meng-input"<<endl;
        }
        
        
    }else if (dari == 'K')
    {
        if (ke == 'C')
        {
            cout << "Anda akan mengonversi suhu dari Kelvin ke Celcius"<<endl;
            cout << "\nMasukan nilai Kelvin = ";
            cin >> k;

            hasil = k - 273;

            cout << k << " kelvin = "<<hasil<< " celcius"<<endl;
        }else if (ke == 'R')
        {
            cout << "Anda akan mengonversi suhu dari Kelvin ke Reamur"<<endl;
            cout << "\nMasukan nilai Kelvin = ";
            cin >> k;

            hasil = (k - 273) * 4/5;

            cout << k << " kelvin = "<<hasil<< " reamur"<<endl;
        }else if (ke == 'F')
        {
            cout << "Anda akan mengonversi suhu dari Kelvin ke Fahrenheit"<<endl;
            cout << "\nMasukan nilai Kelvin = ";
            cin >> k;

            hasil = ((k - 273) * 9/5) + 32;

            cout << k << " kelvin = "<<hasil<< " fahrenheit"<<endl;
        }else
        {
            cout << "\nMaaf input anda salah"<<endl;
            cout << "Jangan lupa untuk menggunakan huruf kapital saat meng-input"<<endl;
        }
        
    }else
    {
        cout << "\nMaaf input anda salah"<<endl;
        cout << "Jangan lupa untuk menggunakan huruf kapital saat meng-input"<<endl;
    }

    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";

    getch ();
    return 0;
}