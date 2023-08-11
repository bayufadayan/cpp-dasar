#include <iostream>
#include <conio.h>
using namespace std;

/*Berikut saya akan membuat program tentang 
tipe data int, char, float, long, double dengan 2 
konstanta
*/

int main (){

    //Header
    cout << "======================================================" <<endl;
    cout << "# # # # #  #   #   # # #   # # #   # # #   # # # # #" <<endl;
    cout << "   #       #   #   #       #   #   #               #" <<endl;
    cout << "   #       #   #   #   ##  # # #   # # #   # # # # #" <<endl;
    cout << "   #       #   #   #   #   #   #       #           #" <<endl;
    cout << "   #       # # #   # # #   #   #   # # #   # # # # #" <<endl;
    cout << "======================================================" <<endl;

    //Program 1
    //Menggunakan int dan char

    //Pendeklarasian
    int u,s;
    u = 18;
    s = 1;
    char k = 'D';

    //output
    cout << "======================================================" << endl;
    cout << "-----MAHASISWA YANG MENGERJAKAN TUGAS INI ADALAH-----" << endl;
    cout << "Nama Lengkap	: Muhamad Bayu Fadayan"<< endl;
    cout << "Umur		: " << u << " tahun" <<endl;
    cout << "Semester	: " << s <<endl;
    cout << "Kelas		: " << k <<endl;
    cout << "------------------UNIVERSITAS PAKUAN------------------" << endl;

    //Program 2
    //Menggunakan float dan konstanta

    //header
    cout << "======================================================" << endl;
    cout << "--------------MENGHITUNG LUAS LINGKARAN---------------" <<endl;
    cout << "======================================================" << endl;

    //Pendeklarasian
    float r, luas;
    const float pi = 3.14;

    //Memasukan nilai jari jari yg diinginkan
    cout << "Masukan nilai jari jari (cm): ";
    cin >> r;
    
    //proses hitungnya
    luas = pi * (r*r);

    //output
    cout << "Luas lingkaran dengan jari-jari " << r << " cm" <<endl;
    cout << "Adalah " << luas << " cm"<<endl;

    //Program 3
    //menggunakan double dan konstanta

    //header
    cout << "======================================================" << endl;
    cout << "------------MENGHITUNG TEKANAN HIDROSTATIS------------"<<endl;
    cout << "======================================================" << endl;
    cout << "Rumus : P = ro x g x h" << endl;

    //pendeklarasian dan untuk input
    double ro, h, hasil;
    const double g = 9.80665;

    cout << "Masukan nilai ro (kg/m^3): ";
    cin >> ro;
    cout << "Masukan nilai h (m): ";
    cin >> h;

    //proses hitung
    hasil = ro*g*h;

    //hasil akhir
    cout << "Maka tekanan hidrostatisnya adalah ";
    cout << hasil <<" Pa" <<endl;

    //program 4
    //menggunakan long dan konstanta

    //header
    cout << "======================================================" << endl;
    cout << "--------------CATATAN KEUANGAN PER TAHUN--------------" << endl;
    cout << "======================================================" << endl;

    //pendeklarasian variavel dan konstanta
    long uang_jajan, thr, ongkos, paket, nabung, biaya_shopee, total_msk, total_klrpasti, total_klrtidak, sisa_duit, total_semua;
    int brp_kali;
    const int jml_bln = 12;

    //buat input
    cout << "Pemasukan : " << endl;
    cout << "Uang jajan kamu per bulan : ";
    cin >> uang_jajan;
    cout << "THR lebaran : ";
    cin >> thr;

    cout << "-------------------------------------------"<<endl;
    cout << "Pengeluaran Pasti per Bulan : " << endl;
    cout << "Ongkos : ";
    cin >> ongkos;
    cout << "Paket Data : ";
    cin >> paket;
    cout << "Nabung : ";
    cin >> nabung;

    cout << "-------------------------------------------"<<endl;
    cout << "Pengeluaran tidak pasti per bulan : " <<endl;
    cout << "berapa kali CO shopee : ";
    cin >> brp_kali;
    cout << "Biaya per Check Out : ";
    cin >> biaya_shopee;

    //perhitungan
    total_msk = (uang_jajan*jml_bln) + thr;
    total_klrpasti = (ongkos+paket+nabung)*jml_bln;
    total_klrtidak = (brp_kali*biaya_shopee)*jml_bln;

    //hasil awal
    cout << "-------------------------------------------" <<endl;
    cout << "Total Pemasukan per Tahun : " << total_msk <<endl;
    cout << "Total Pengeluatan Pasti per tahun : " << total_klrpasti <<endl;
    cout << "Total Pengeluaran Tidak Pasti per tahun : " << total_klrtidak <<endl;

    //Hitung lagi
    total_semua = total_klrpasti + total_klrtidak;
    sisa_duit = total_msk - total_semua;
    
    //hasil akhir
    cout << "-------------------------------------------" <<endl;
    cout << "Jadi sisa uang saya adalah " << sisa_duit << endl;

    cout << "MUHAMAD BAYU FADAYAN_065121100\n\n";


    getch ();
    return 0;
}