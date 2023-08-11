#include <iostream>
#include <conio.h>
using namespace std;

void header(){
    cout << "=============================================="<<endl;
    cout << "---------FORMULIR PENGISIAN DATA DIRI---------"<<endl;
    cout << "=============================================="<<endl;
}

string data(string nama, string jk){
    return ("\n"+nama+"\nAnda adalah seorang "+jk);
}

void akhiran(){
    cout << "\n\nFungsi katagori sedang by"<<endl;
    cout << "MUHAMAD BAYU FADAYAN_065121100"<<endl;
}

int main (){

    string nama, jk;
    int telp,umur;

    header();
    cout << "masukan data dengan benar!"<<endl;
    cout << "Nama Lengkap\t: "; getline (cin, nama);
    cout << "Jenis Kelamin\t: "; getline (cin, jk);
    cout << "Umur\t\t: "; cin >> umur;
    cout << "No. Telp\t: "; cin >> telp;

    cout << data(nama,jk);
    if (umur < 15)
    {
        cout << " dan masih anak anak"<<endl;
    }else if (umur >=21)
    {
        cout << " dan sudah dewasa"<<endl;
    }else
    {
        cout << " dan dalam masa remaja"<<endl;
    }
    
    akhiran();


    getch();
    return 0;
}