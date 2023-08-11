#include <iostream>
#include <conio.h>
using namespace std;

int main (){
//judul
    cout << "+----------------------------------------------+"<< endl;
    cout << "|OPERASI DUA BUAH MATRIKS DENGAN ORDO YANG SAMA|"<< endl;
    cout << "+----------------------------------------------+"<< endl;

//deklarasi
    int a, b;

//jumlah kolom dan baris
    cout <<"\nMasukan Jumlah baris dan kolom untuk kedua matriks"<<endl;
    cout << "Baris  = "; cin >> a;
    cout << "Kolom  = "; cin >> b;
    cout << endl;

//deklarasi array
    int matriksa[a][b];
    int matriksb[a][b];
    int hasil [a][b];

//pengisian nilai matriks a dan b
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << "Baris ke "<<i+1<< " Kolom ke "<<j+1<< " = ";
            cin >> matriksa[i][j];
        }
    }
    cout << endl;

    cout << "Matriks B"<<endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << "Baris ke "<<i+1<< " Kolom ke "<<j+1<< " = ";
            cin >> matriksb[i][j];
        }
    }

// Visualisasi 
    cout << "\n==========================="<<endl;
    cout << "Visualisasi Matriks A dan B"<<endl;
    cout << "==========================="<<endl;

    cout << "Matriks A"<<endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << matriksa[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B"<<endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << matriksb[i][j] << " ";
        }
        cout << endl;
    }

//penjumlahan matriks
    cout << endl;
    cout << "==================="<<endl;
    cout << "PENJUMLAHAN MATRIKS"<<endl;
    cout << "==================="<<endl;
    cout << "Matriks A + Matriks B"<<endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            hasil[i][j] = matriksa[i][j] + matriksb [i][j];
        }
        
    }

//visualisasi penjumlahan matriks
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << matriksa[i][j] << " + " << matriksb[i][j] << "      ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Hasil : "<< endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << hasil[i][j]<<"  ";
        }
        cout << endl;
    }


//pengurangan matriks
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            hasil[i][j] = matriksa[i][j] - matriksb [i][j];
        }
        
    }    


    getch ();
    return 0;
}

