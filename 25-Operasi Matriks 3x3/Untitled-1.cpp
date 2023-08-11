#include <iostream>
#include <conio.h>
using namespace std;  

int main(){  
    int a[4][4], b, c;  
    float det, inv[4][4], kov[4][4], adj[4][4];   
    cout << "Mencari Determinan Dan Ivers Dari Matriks Berordo 3X3\n";  
    for (b = 1; b <= 3; b++){  
        for (c = 1; c <= 3; c++) {  
             cout << "Masukkan Angka dari Baris ke " << b << " Kolom ke " << c << " = ";  
             cin >> a[b][c];  
        }  
    }  
    cout << "\nMatriks A = \n";  
    for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
             cout << a[b][c] << "\t";  
        }  
        cout << endl;  
    } 
    //Mencari Determinan Dengan Sarrus/  
     det = ((a[1][1] * a[2][2] * a[3][3]) + (a[1][2] * a[2][3] * a[3][1]) + (a[1][3] * a[2][1] * a[3][2])) - ((a[3][1] * a[2][2] * a[1][3]) + (a[3][2] * a[2][3] * a[1][1]) + (a[3][3] * a[2][1] * a[1][2]));  
     cout << "\nDeterminan Matriks Tersebut = " << det << endl; 
    //Mencari kofaktor/  
    kov[1][1] = (a[2][2] * a[3][3]) - (a[3][2] * a[2][3]);  
    kov[1][2] = ((a[2][1] * a[3][3]) - (a[3][1] * a[2][3])) * -1;  
    kov[1][3] = (a[2][1] * a[3][2]) - (a[3][1] * a[2][2]);  
    kov[2][1] = ((a[1][2] * a[3][3]) - (a[3][2] * a[1][3])) * -1;  
    kov[2][2] = (a[1][1] * a[3][3]) - (a[3][1] * a[1][3]);  
    kov[2][3] = ((a[1][1] * a[3][2]) - (a[3][1] * a[1][2])) * -1;  
    kov[3][1] = (a[1][2] * a[2][3]) - (a[2][2] * a[1][3]);  
    kov[3][2] = ((a[1][1] * a[2][3]) - (a[2][1] * a[1][3])) * -1;  
    kov[3][3] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);  
    cout << "\nKofaktor A = \n";  
    for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
             cout << kov[b][c] << "\t";  
        }  
        cout << endl;  
    }
    //Mencari Adjoin/  
    cout << "\nAdjoin Dari Kofaktor A = \n";  
    for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
             adj[b][c] = kov[c][b];  
             cout << adj[b][c] << "\t";  
        }  
        cout << endl;  
    } 
    //Mencari Invers/  
    cout << "\nInvers Dari Matriks A = \n";  
    for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
            inv[b][c] = (1 / det) * adj[b][c];  
            cout << inv[b][c] << "\t";  
        }  
        cout << endl;  
    }

    cout << endl;
    
    getch();
    return 0;
}