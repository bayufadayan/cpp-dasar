#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    int i;
    string nama [5];
    nama [0] = "Bayu";
    nama [1] = "Regart";
    nama [2] = "Fikrah";
    nama [3] = "Jambas";
    nama [4] = "Surami";

    for (i = 0; i < 5; ++i){
        cout << "Haloo.. "<<nama [i]<<endl;

    }

    getch ();
    return 0;
}