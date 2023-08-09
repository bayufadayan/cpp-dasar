#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    int a, t;


    cout << "MENCARI PYTHAGORAS SEGITIGA SIKU SIKU" << endl;
    cout << "=====================================" << endl;

    cout << "Masukan Alas Segitiga (CM) = "; cin >> a;
    cout << "Masukan Tinggi Segitiga (CM) = "; cin >> t;
    cout << endl;

    cout << "S E G I T I G A  S I K U  S I K U" << endl;
    cout << "---------------------------------" << endl;
    cout << "          /|" << endl;
    cout << "         / |" << endl;
    cout << "        /  |" << endl;
    cout << "       /   |" << endl;
    cout << "      /    |" << endl;
    cout << "     /     |" << " t = " << t << " cm" << endl;
    cout << "    /      |" << endl;
    cout << "   /       |" << endl;
    cout << "  /        |" << endl;
    cout << " /         |" << endl;
    cout << "/__________|" << endl;
    cout << "   a = " << a << " cm" << endl << endl;

    cout << "Berdasarkan data yang telah masuk, \nmaka akan diperoleh nilai bidang miring : ";
    cout << sqrt(pow(a,2)+pow(t,2)) << " cm" << endl;
    cout << "--------" << endl;
    cout << "Dan inilah hasil luasnya = ";
    cout << (a*t)/2 << " cm^2";

    getch();
    return 0;
}