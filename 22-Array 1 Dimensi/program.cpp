#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int nilai_uas [10] = {79, 83, 77, 100, 98, 70, 67, 82, 94, 100};
    string nama [10] = {"Jerryns", "Dwarva", "Vlocky", "Bayu", "Rheya", "Alkazam", "Kuzack", "Gandes", "Jaka","Faina"};

    for (int i = 0; i < 10; ++i){
        cout << "Indeks ke-"<<i<<" adalah "<<nilai_uas[i]<<" dan "<<nama[i]<<endl;

    }
    cout << "============================================================="<<endl;
    cout << "Jika array tersebut dijadikan kalimat agar lebih enak di baca"<<endl;
    cout << "============================================================="<<endl;

    cout << "\nHasil UAS Mata Kuliah Keanekaragaman Laut :\n"<<endl;

    for (int i = 0; i < 10; ++i){
        cout <<"Nilai untuk "<<nama[i]<< " adalah "<<nilai_uas[i]<<endl;
    }
    
    getch ();
    return 0;

}