#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    //header untuk mempercantik output
    cout << "===================================="<<endl;
    cout << "         PENDETEKSI BILANGAN      "<<endl;
    cout << "     [NEGATIF][NETRAL][POSITIF]     "<<endl;
    cout << "====================================\n";

    //pendeklarasian dan input bilangan
    int a;
    cout << "Masukan bilangan : ";
    cin >> a;

    //percabangan
    //untuk positif
    if (a > 0)
    {
        cout << "["<<a<<"] termasuk bilangan"<<endl;
        cout << "+++++++ POSITIF +++++++"<<endl;
    
    //untuk negatif
    }else if (a < 0)
    {
        cout << "["<<a<<"] termasuk bilangan"<<endl;
        cout << "------- NEGATIF -------"<<endl;
    //untuk netral
    } else {
        cout << "[NOL] termasuk bilangan"<<endl;
        cout << "( ( ( ( (NETRAL) ) ) ) )"<<endl;
    }

    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";
    

    getch ();
    return 0;
}