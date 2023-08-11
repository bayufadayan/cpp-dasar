#include <iostream>
#include <conio.h>
using namespace std;

int main (){
//header
    cout << "MATRIKS 3 X 3"<<endl;
//pendeklarasian
    int matriksA[3][3]; int A11[2][2];
    int count = 4;

//Memasukan elemen matriks
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (j == 0)
            {
                cout << "---------------------------"<<endl;
            }
            cout << "Masukan Baris "<<i+1<< " kolom "<<j+1<<" : ";
            cin >> matriksA[i][j];
        }
    }
    
//visualisasi matriks
cout << "\n========================" << endl;
cout << "       VISUALISASI" << endl;
cout << "========================" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriksA[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n========================" << endl;
    cout << "        KOFAKTOR" << endl;
    cout << "========================";
//visualisasi kofaktor  
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {   
            if ((i != 0)&& (j != 0))
            {
                cout << matriksA[i][j] << "\t";
            }
        }
        cout << endl;
    }

    getch();
    return 0;
}