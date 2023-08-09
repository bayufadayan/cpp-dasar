#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    // program yang saya buat ini masih sangat sangat sederhana,
    // karena saya masih bingung cara membuat program mean, median, modus dengan sebenar-benarnya
    cout << "==============================================" << endl;
    cout << "--------MENENTUKAN MEAN, MEDIAN, MODUS--------" << endl;
    cout << "==============================================" << endl;

    // pendeklarasian
    int a, b, c, d, e;
    float mean, median, modus;

    // Input data
    cout << "Masukan 5 data di bawah ini dengan bilangan bulat yang terurut : " << endl;
    cout << "Data 1 = ";
    cin >> a;
    cout << "Data 2 = ";
    cin >> b;
    cout << "Data 3 = ";
    cin >> c;
    cout << "Data 4 = ";
    cin >> d;
    cout << "Data 5 = ";
    cin >> e;

    // proses perhitungan
    mean = (a + b + c + d + e) / 5;
    median = c;

    // hasil atau outputnya
    cout << "--------------------------------------------" << endl;
    cout << "Berdasarkan data, maka dapat di ketahui : " << endl;
    cout << "Mean \t= " << mean << endl;
    cout << "Median \t= " << median << endl;
    cout << "Modus \t Data terbanyak" << endl;

    // Bantu saya menentukan modus :-O
    cout << "\nMenurut anda berapakah data terbanyak?" << endl;
    cout << "Jawab = ";
    cin >> modus;
    cout << "--------------------------------------------" << endl;
    cout << "Dapat disimpulkan bahwa" << endl;
    cout << "Modus = " << modus << endl;

    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";

    getch();
    return 0;
}