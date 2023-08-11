#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    cout << "[TUGAS 2]\n========================"<<endl;

    int x, y;

    for (x=1; x<= 6; x++){
        for (y=1; y<=x; y++){
            if (y%2 == 1){
                cout << "*";
            }else{
                cout <<y;
            }
        }
        cout <<endl;
    }
    for (x=5; x>= 1; x--){
        for (y=1; y<=x; y++){
            if (y%2 == 1){
                cout << "*";
            }else{
                cout <<y;
            }
        }
        cout <<endl;
    }
    

    cout << "\n\nMUHAMAD BAYU FADAYAN_065121100\n\n";
    getch ();
    return 0;
}