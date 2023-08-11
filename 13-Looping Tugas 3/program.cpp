#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    cout << "[TUGAS 3]\n========================"<<endl;

    int x, y;

    for (x=5; x>= 1; x--){
        cout <<"  ";
        for (y=1; y<=x; y++){
            cout <<" ";
        }
        cout <<"*****";
        cout <<endl;
    }


    cout << "\n\nMUHAMAD BAYU FADAYAN_065121100\n\n";
    getch ();
    return 0;
}