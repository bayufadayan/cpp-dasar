#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    char x; 
    float y;
    float jml = 0;
    int data = 0;
    char ulang;
    
    do
    {
    system ("cls");

    cout << "Pilih Tugas :\nA. 1, 2, 4, 8, 16, 32\nB. 1, 1/3, 1/9, 1/27, 1/81\nC. Mencari rata rata dari bilangan asli 1 s/d 15\nD. Mencari jumlah bilangan ganjil antara 1 s/d 15\nE. Mencari jumlah bilangan genap antara 1 s/d 15"<<endl;
    cout << "--------------------" << endl;
    cout << "Pilih [A/B/C/D/E] : "; 
    cin >> x;

//Nomer A ================================================================================================
    if (x == 'A')
    {
        cout << "\n[TUGAS A]\n==================="<<endl;

        cout << "Looping While : "<<endl;
        y = 1;
        while (y <= 32)
        {
            cout <<"["<<y<<"] ";
            y *= 2;
        }

        cout << "\n==================="<<endl;
        cout << "Looping Do While : "<<endl;
        y = 1;
        do
        {
            cout <<"["<<y<<"] ";
            y *= 2;
        } while (y <= 32);

        cout << "\n==================="<<endl;
        cout << "Looping For : "<<endl;
        for (y = 1; y <= 32; y *= 2)
        {
            cout <<"["<<y<<"] ";
        }

//Nomer B ================================================================================================
    }else if (x == 'B')
    {
        cout << "\n[TUGAS B]\n================================================"<<endl;

        cout << "Looping While : "<<endl;
        y = 1;
        while (y >= 0.0123)
        {
            cout <<"["<<y<<"] ";
            y /= 3;
        }

        cout << "\n================================================"<<endl;
        cout << "Looping Do While : "<<endl;
        y = 1;
        do
        {
            cout <<"["<<y<<"] ";
            y /= 3;
        } while (y >= 0.0123);

        cout << "\n================================================"<<endl;
        cout << "Looping For : "<<endl;
        for ( y = 1; y >= 0.0123; y /= 3)
        {
            cout <<"["<<y<<"] ";
        }
        
//Nomer C ================================================================================================
    }else if (x == 'C')
    {
        cout << "\n[TUGAS C]\nMencari rata rata dari bilangan asli 1 s/d 15"<<endl;
        cout << "=============================================="<<endl;

        cout << "Looping While : "<<endl;
        y = 1;
        while (y <= 15)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y++;
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bilangan = "<<jml<<endl;
        cout << "Jumlah data = "<<data <<endl;
        cout << "Rata rata = "<<jml<<"/"<<data<< " = "<<jml/data <<endl;

        cout << "=============================================="<<endl;

        cout << "Looping Do While : "<<endl;
        jml = 0;
        data = 0;
        y = 1;
        do
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y++;
            data ++;
        } while (y <= 15);

        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bilangan = "<<jml<<endl;
        cout << "Jumlah data = "<<data <<endl;
        cout << "Rata rata = "<<jml<<"/"<<data<< " = "<<jml/data <<endl;
        
        cout << "=============================================="<<endl;

        cout << "Looping For : "<<endl;
        jml = 0;
        data = 0;
        for (y = 1; y <= 15; y++)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bilangan = "<<jml<<endl;
        cout << "Jumlah data = "<<data <<endl;
        cout << "Rata rata = "<<jml<<"/"<<data<< " = "<<jml/data <<endl;

//Nomer D ================================================================================================        
    }else if (x == 'D')
    {
        cout << "\n[TUGAS D]\nMencari jumlah bilangan ganjil antara 1 s/d 15"<<endl;
        cout << "=============================================="<<endl;
        
        cout << "Looping While : "<<endl;
        y = 3;
        while (y < 15)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y += 2; 
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.ganjil = "<<jml<<endl;
        cout << "Jumlah data bil.ganjil = "<< data<<endl;

        cout << "=============================================="<<endl;
        
        cout << "Looping Do While : "<<endl;
        jml = 0;
        data = 0;
        y = 3;
        do
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y += 2;
            data ++;
        } while (y < 15);
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.ganjil = "<<jml<<endl;
        cout << "Jumlah data bil.ganjil = "<< data<<endl;

        cout << "=============================================="<<endl;
        
        cout << "Looping For : "<<endl;
        jml = 0;
        data = 0;
        for ( y = 3; y < 15; y += 2)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.ganjil = "<<jml<<endl;
        cout << "Jumlah data bil.ganjil = "<< data<<endl;

//Nomer E ================================================================================================
    }else
    {
        cout << "\n[TUGAS E]\nMencari jumlah bilangan genap antara 1 s/d 15"<<endl;
        cout << "=============================================="<<endl;

        cout << "Looping While : "<<endl;
        y = 2;
        while (y < 15)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y += 2;
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.genap = "<<jml<<endl;
        cout << "Jumlah data bil.genap = "<< data<<endl;

        cout << "=============================================="<<endl;
        
        cout << "Looping Do While : "<<endl;
        jml = 0;
        data = 0;
        y = 2;
        do
        {
            cout <<"["<<y<<"] ";
            jml += y;
            y += 2;
            data ++;
        } while (y < 15);
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.genap = "<<jml<<endl;
        cout << "Jumlah data bil.genap = "<< data<<endl;

        cout << "=============================================="<<endl;
        
        cout << "Looping For : "<<endl;
        jml = 0;
        data = 0;
        for ( y = 2; y < 15; y += 2)
        {
            cout <<"["<<y<<"] ";
            jml += y;
            data ++;
        }
        cout << "\n------------------------------"<<endl;
        cout << "Jumlah seluruh bil.genap = "<<jml<<endl;
        cout << "Jumlah data bil.genap = "<<data<<endl;

    }

    cout <<"\n\nMuhamad Bayu Fadayan - 065121100\nAlgoritma dan Pemrograman"<<endl;
    cout << "\n\nUlang? [y] ";
    cin >> ulang;

    } while (ulang == 'y');
    cout <<"\n\nMuhamad Bayu Fadayan - 065121100\nAlgoritma dan Pemrograman"<<endl;

    getch ();
    return 0;    
}