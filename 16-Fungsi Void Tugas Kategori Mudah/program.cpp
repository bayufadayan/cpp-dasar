#include <iostream>
#include <conio.h>
using namespace std;

void header(){
    cout << "==============================================="<<endl;
    cout << "DATA SEORANG MAHASISWA YANG MEMBUAT PROGRAM INI"<<endl;
    cout << "==============================================="<<endl;
}

string data_mahasiswa(string nama, string jurusan, string kelas){
    return("Nama Lengkap\t: "+nama+"\nJurusan\t\t: "+jurusan+"\nKelas\t\t: "+kelas);
}

void akhiran(){
    cout << "\n\nFungsi katagori mudah by"<<endl;
    cout << "MUHAMAD BAYU FADAYAN_065121100"<<endl;
}

int main (){
    header();
    cout << data_mahasiswa("Muhamad Bayu Fadayan","Ilmu Komputer","D");

    akhiran();

    getch();
    return 0;
}