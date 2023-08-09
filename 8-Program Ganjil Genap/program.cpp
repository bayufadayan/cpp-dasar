#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    //pendeklarasian variabel
    int a;

    //Header untuk mempercantik output
    cout << "===========================================" << endl;
    cout << "PENDETEKSI BILANGAN GENAP & BILANGAN GANJIL" << endl;
    cout << "===========================================\n";

    //Bagian input suatu bilangan
    cout << "Masukan bilangan bulat : ";
    cin >> a;

    //Percabangan untuk ganjil
    if (a%2 == 1)
    {
        cout << "["<<a<<"] termasuk bilangan" <<endl;
        cout << "=======[GANJIL]======="<<endl;
    
    //percanbangan untuk genap
    } else {
        cout << "["<<a<<"] termasuk bilangan" <<endl;
        cout << "=======[GENAP]======="<<endl;
    }
    
    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";
    getch ();
    return 0;
}