#include <iostream>
#include <conio.h>
using namespace std;

void bentuk()
{
    cout << "**";
}
void bentuk2()
{
    cout << "[]";
}
void luar()
{
    cout << "  ";
}

void benar(int i, int j)
{
    for (i = 1; i <= 18; ++i)
    {
        cout << "\t";
        for (j = 1; j <= 20; ++j)
        {
            if ((i == 1) || (i == 18))
            {
                if ((j >= 8) && (j <= 13))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 2) || (i == 17))
            {
                if ((j >= 6) && (j <= 15))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 3) || (i == 16))
            {
                if ((j >= 4) && (j <= 17))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 4) || (i == 5))
            {
                if ((j >= 3) && (j <= 18))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 6)
            {
                if (((j >= 2) && (j <= 15)) || ((j >= 18) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 7)
            {
                if (((j >= 2) && (j <= 14)) || ((j >= 18) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 8)
            {
                if (((j >= 1) && (j <= 13)) || ((j >= 17) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 9)
            {
                if (((j >= 1) && (j <= 12)) || ((j >= 16) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 10)
            {
                if (((j >= 1) && (j <= 4)) || ((j >= 7) && (j <= 11)) || ((j >= 15) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 11)
            {
                if (((j >= 1) && (j <= 4)) || ((j >= 8) && (j <= 10)) || ((j >= 14) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 12)
            {
                if (((j >= 2) && (j <= 5)) || ((j == 9)) || ((j >= 13) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 13)
            {
                if (((j >= 2) && (j <= 6)) || ((j >= 12) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 14)
            {
                if (((j >= 3) && (j <= 7)) || ((j >= 11) && (j <= 18)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if (i == 15)
            {
                if (((j >= 3) && (j <= 8)) || ((j >= 10) && (j <= 18)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
        }
        cout << endl;
    }
}
void salah(int i, int j)
{
    for (i = 1; i <= 18; ++i)
    {
        cout << "\t";
        for (j = 1; j <= 20; ++j)
        {
            if ((i == 1) || (i == 18))
            {
                if ((j >= 8) && (j <= 13))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 2) || (i == 17))
            {
                if ((j >= 6) && (j <= 15))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 3) || (i == 16))
            {
                if ((j >= 4) && (j <= 17))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 4) || (i == 15))
            {
                if ((j >= 3) && (j <= 18))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 5) || (i == 14))
            {
                if (((j >= 3) && (j <= 5)) || ((j >= 8) && (j <= 13)) || ((j >= 16) && (j <= 18)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 6) || (i == 13))
            {
                if (((j >= 2) && (j <= 5)) || ((j >= 9) && (j <= 12)) || ((j >= 16) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 7) || (i == 12))
            {
                if (((j >= 2) && (j <= 6)) || ((j >= 10) && (j <= 11)) || ((j >= 15) && (j <= 19)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 8) || (i == 11))
            {
                if (((j >= 1) && (j <= 7)) || ((j >= 14) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
            else if ((i == 9) || (i == 10))
            {
                if (((j >= 1) && (j <= 8)) || ((j >= 13) && (j <= 20)))
                {
                    bentuk();
                }
                else
                {
                    luar();
                }
            }
        }
        cout << endl;
    }
}
void tulisan_true(int i, int j)
{
    for (i = 1; i <= 7; ++i)
    {
        cout << "\t";
        for (j = 1; j <= 20; ++j)
        {
            if ((i == 1) || (i == 2))
            {
                if ((j >= 2) && (j <= 20))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 3)
            {
                if (((j >= 2) && (j <= 5)) || ((j >= 7) && (j <= 9)) || ((j >= 12) && (j <= 13)) || ((j >= 17) && (j <= 18)) || ((j == 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 4)
            {
                if (((j >= 3) && (j <= 4)) || ((j == 6)) || ((j == 8)) || ((j >= 10) && (j <= 11)) || ((j >= 13) && (j <= 15)) || ((j == 17)) || ((j == 19)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 5)
            {
                if (((j == 2)) || ((j == 4)) || ((j == 8)) || ((j >= 10) && (j <= 11)) || ((j >= 13) && (j <= 14)) || ((j == 17)) || ((j >= 19) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 6)
            {
                if (((j == 2)) || ((j == 4)) || ((j >= 6) && (j <= 8)) || ((j >= 10) && (j <= 11)) || ((j == 13)) || ((j == 15)) || ((j == 17)) || ((j >= 19) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 7)
            {
                if (((j >= 3) && (j <= 4)) || ((j == 8)) || ((j >= 10) && (j <= 11)) || ((j == 13)) || ((j == 17)) || ((j >= 19) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
        }
        cout << endl;
    }
}
void tulisan_false(int i, int j)
{
    for (i = 1; i <= 7; ++i)
    {
        cout << "\t";
        for (j = 1; j <= 20; ++j)
        {
            if (i == 1)
            {
                if (((j == 1)) || ((j >= 4) && (j <= 9)) || ((j >= 11) && (j <= 15)) || ((j >= 17) && (j <= 120)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 2)
            {
                if (((j == 1)) || ((j == 3)) || ((j >= 5) && (j <= 9)) || ((j >= 11) && (j <= 15)) || ((j >= 17) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 3)
            {
                if (((j == 1)) || ((j >= 3) && (j <= 5)) || ((j == 9)) || ((j == 11)) || ((j == 15)) || ((j >= 17) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 4)
            {
                if (((j >= 1) && (j <= 2)) || ((j >= 4) && (j <= 7)) || ((j == 9)) || ((j >= 11) && (j <= 13)) || ((j == 15)) || ((j >= 19) && (j <= 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 5)
            {
                if (((j >= 1) && (j <= 3)) || ((j >= 5) && (j <= 6)) || ((j == 9)) || ((j >= 11) && (j <= 12)) || ((j == 15)) || ((j >= 17) && (j <= 18)) || ((j == 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 6)
            {
                if (((j == 1)) || ((j == 3)) || ((j == 5)) || ((j == 7)) || ((j == 9)) || ((j == 11)) || ((j == 13)) || ((j == 15)) || ((j >= 17) && (j <= 18)) || ((j == 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 7)
            {
                if (((j >= 1) && (j <= 2)) || ((j == 5)) || ((j == 9)) || ((j == 11)) || ((j == 15)) || ((j >= 17) && (j <= 18)) || ((j == 20)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
        }
        cout << endl;
    }
}
void siapakah_aku(int i, int j)
{
    for (i = 1; i <= 15; ++i)
    {
        for (j = 1; j <= 32; ++j)
        {
            if (i == 1)
            {
                if (((j >= 3) && (j <= 28)) || ((j >= 30) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 2)
            {
                if (((j == 2)) || ((j >= 4) && (j <= 11)) || ((j >= 14) && (j <= 28)) || ((j >= 30) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 3)
            {
                if (((j >= 2) && (j <= 4)) || ((j == 6)) || ((j == 10)) || ((j >= 12) && (j <= 13)) || ((j == 15)) || ((j == 19)) || ((j >= 21) && (j <= 22)) || ((j == 24)) || ((j == 28)) || ((j >= 30) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 4)
            {
                if (((j == 1)) || ((j >= 3) && (j <= 8)) || ((j == 10)) || ((j >= 12) && (j <= 13)) || ((j >= 15) && (j <= 17)) || ((j == 19)) || ((j == 21)) || ((j >= 23) && (j <= 26)) || ((j == 28)) || ((j == 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 5)
            {
                if (((j >= 1) && (j <= 2)) || ((j == 4)) || ((j >= 6) && (j <= 7)) || ((j == 10)) || ((j >= 14) && (j <= 16)) || ((j == 19)) || ((j >= 22) && (j <= 25)) || ((j == 28)) || ((j >= 30) && (j <= 31)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 6)
            {
                if (((j == 2)) || ((j == 4)) || ((j == 6)) || ((j == 8)) || ((j == 10)) || ((j >= 12) && (j <= 15)) || ((j == 17)) || ((j == 19)) || ((j == 21)) || ((j >= 23) && (j <= 24)) || ((j == 26)) || ((j == 28)) || ((j >= 30) && (j <= 31)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 7)
            {
                if (((j == 1)) || ((j == 4)) || ((j == 6)) || ((j == 10)) || ((j >= 12) && (j <= 15)) || ((j == 19)) || ((j == 24)) || ((j == 28)) || ((j >= 21) && (j <= 22)) || ((j >= 30) && (j <= 31)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 9)
            {
                if (((j >= 1) && (j <= 23)) || ((j >= 25) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 10)
            {
                if (((j >= 1) && (j <= 3)) || ((j >= 5) && (j <= 8)) || ((j == 12)) || ((j >= 14) && (j <= 15)) || ((j == 17)) || ((j >= 19) && (j <= 20)) || ((j == 22)) || ((j == 24)) || ((j >= 26) && (j <= 28)) || ((j >= 30) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 11)
            {
                if (((j >= 1) && (j <= 2)) || ((j >= 6) && (j <= 10)) || ((j == 12)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j >= 22) && (j <= 24)) | ((j >= 26) && (j <= 27)) || ((j >= 31) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 12)
            {
                if (((j == 1)) || ((j == 4)) || ((j >= 7) && (j <= 9)) || ((j == 12)) || ((j >= 15) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j >= 22) && (j <= 23)) || ((j >= 25) && (j <= 26)) || ((j == 29)) || ((j == 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 13)
            {
                if (((j >= 1) && (j <= 2)) || ((j >= 6) && (j <= 8)) || ((j == 10)) || ((j == 12)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j >= 22) && (j <= 27)) || ((j >= 31) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else if (i == 14)
            {
                if (((j >= 1) && (j <= 3)) || ((j >= 5) && (j <= 8)) || ((j == 12)) || ((j >= 14) && (j <= 15)) || ((j >= 17) && (j <= 18)) || ((j >= 21) && (j <= 23)) || ((j >= 25) && (j <= 28)) || ((j >= 30) && (j <= 32)))
                {
                    luar();
                }
                else
                {
                    bentuk2();
                }
            }
            else
            {
                luar();
            }
        }
        cout << endl;
    }
}
void selamat(int i, int j)
{
    for (i = 1; i <= 7; ++i)
    {
        for (j = 1; j <= 29; ++j)
        {
            if (i == 1)
            {
                if (((j >= 3) && (j <= 8)) || ((j >= 10) && (j <= 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 2)
            {
                if (((j == 2)) || ((j >= 4) && (j <= 8)) || ((j >= 10) && (j <= 26)) || ((j >= 28) && (j <= 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 3)
            {
                if (((j >= 2) && (j <= 5)) || ((j >= 7) && (j <= 8)) || ((j == 10)) || ((j >= 14) && (j <= 15)) || ((j == 18)) || ((j >= 21) && (j <= 22)) || ((j == 26)) || ((j >= 28) && (j <= 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 4)
            {
                if (((j == 1)) || ((j >= 3) && (j <= 4)) || ((j == 6)) || ((j == 8)) || ((j >= 10) && (j <= 12)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j >= 22) && (j <= 24)) || ((j == 26)) || ((j == 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 5)
            {
                if (((j >= 1) && (j <= 2)) || ((j == 4)) || ((j == 8)) || ((j >= 10) && (j <= 11)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j >= 22) && (j <= 23)) || ((j == 26)) || ((j >= 28) && (j <= 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 6)
            {
                if (((j == 2)) || ((j == 4)) || ((j >= 6) && (j <= 8)) || ((j == 10)) || ((j == 12)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j == 22)) || ((j == 24)) || ((j == 26)) || ((j >= 28) && (j <= 29)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
            else if (i == 7)
            {
                if (((j == 1)) || ((j == 4)) || ((j == 8)) || ((j == 10)) || ((j == 14)) || ((j >= 16) && (j <= 17)) || ((j >= 19) && (j <= 20)) || ((j == 22)) || ((j == 26)))
                {
                    luar();
                }
                else
                {
                    bentuk();
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    int i, j, myChoice;
    char repeat;

    do
    {
        system("cls");
        system("color 3");
        cout << "PILIH GAMBAR : \n"
             << "1. Siapakah Aku? \n"
             << "2. Simbol Benar \n"
             << "3. Simbol Salah \n"
             << "4. Tulisan Benar \n"
             << "5. Tulisan Salah \n"
             << "6. Selamat!" << endl;

        cout << "---------------" << endl;
        cout << "PIlihanmu : ";
        cin >> myChoice;
        system("cls");

        switch (myChoice)
        {
        case 1:
            system("color B");
            siapakah_aku(i, j);
            break;

        case 2:
            system("color A");
            benar(i, j);
            break;

        case 3:
            system("color C");
            salah(i, j);
            break;

        case 4:
            system("color A");
            tulisan_true(i, j);\
            break;

        case 5:
            system("color C");
            tulisan_false(i, j);
            break;

        case 6:
            system("color A");
            selamat(i, j);
            break;

        default:
            system("color D");
            cout << "Pilih yang bener Anjim!! Sesuain sama pilihannya!" << endl;
            break;
        }

        cout << "Ulang? (y) ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    getch();
    return 0;
}