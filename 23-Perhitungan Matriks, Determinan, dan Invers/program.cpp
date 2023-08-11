#include <iostream>
#include <conio.h>
using namespace std;

int main (){
//pendeklarasian
    double det;
    int simpan;
//[2] pertama adalah baris, [2] kedua adalah kolom
    cout << "MATRIKS 2x2"<<endl;
    cout << "|[0][0]    [0][1]|"<<endl;
    cout << "|[1][0]    [1][1]|"<<endl;
    cout << "--------------------"<<endl;
    double matriks [2][2];

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout << "Masukan ["<<i<<"]["<<j<<"] = "; cin >> matriks[i][j];
        }

    }
    cout << "--------------------"<<endl;
    cout << "Matriksnya adalah \n";
//i untuk jumlah baris, j untuk jumlah kolom
    for (int i = 0; i < 2; ++i){
        cout <<"| ";
        for (int j = 0; j < 2; ++j){
            cout << matriks[i][j]<<" ";
        }
        cout <<"|" << endl;
    }

    cout << "------------------------------------------------------------"<<endl;
    cout << "           Mencari invers dari matriks diatas"<<endl;
    cout << "------------------------------------------------------------"<<endl;
    cout << "Mencari determinan"<<endl;
    cout << "("<<matriks[0][0]<<" x "<<matriks[1][1]<<" - "<<matriks[0][1]<<" x "<<matriks[1][0]<<")"<<endl;

    det = (((matriks[0][0])*(matriks[1][1]))-((matriks[0][1])*(matriks[1][0])));
    cout << "Determinan = " <<det<<endl;
    simpan = matriks[1][1];
    matriks[1][1] = matriks[0][0];
    matriks[0][0] = simpan;
    matriks[0][1] = matriks[0][1]*-1;
    matriks[1][0] = matriks[1][0]*-1;
    cout << "--------------------"<<endl;
    cout << "invers matriks :"<<endl;
    cout << "1/"<<det<<" *";
    for (int i = 0; i < 2; ++i){
        cout << "\t| ";
        for (int j = 0; j < 2; ++j){
            cout << matriks[i][j]<<"\t";
        }
        cout << "|"<<"\n";
    }
    cout << "--------------------"<<endl;
    cout << "Hasilnya = "<<endl;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            matriks[i][j] = (1/det * matriks[i][j]);
        }
    }

    for (int i = 0; i < 2; ++i){
        cout << "| ";
        for (int j = 0; j < 2; ++j){
            cout << matriks[i][j]<<"\t";
        }
        cout << "|"<<endl;
    }
    getch ();
    return 0;
}