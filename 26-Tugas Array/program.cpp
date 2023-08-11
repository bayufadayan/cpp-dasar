#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    string pilih, ulang;
    do
    {
    system ("cls");
    cout << "TUGAS PERTEMUAN KE-13"<<endl;
    cout << "1. Tugas Array nomer 1\n2. Tugas Array nomer 2\n3. Tugas Array nomer 3"<<endl;
    cout << "Pilih Tugas : "; cin >> pilih;

    if (pilih == "1")
    {
        system ("cls");
        cout << "Nomer 1"<<endl;
        cout << "Program untuk menampilkan data dan informasi seperti pada tabel soal\n\n";

        int x[2][2] =
        {
        {40,60},
        {50,90}
        };

        for (int i = 1; i <= 2; i++){
            for (int j = 1; j <= 2; j++){
                cout << x[i-1][j-1] << " ";
                if(j % 2 == 0){
                    cout << (x[i - 1][j - 2] + x[i - 1][j - 1]) / 2;
                    cout << endl;
                    if(i == 2){
                        cout << (x[i - 1][j - 2] + x[i - 2][j - 2]) / 2 << " ";
                        cout << (x[i - 2][j - 1] + x[i - 1][j - 1]) / 2;
                    }
                }
            }
        }
        cout<<endl;

    }if (pilih == "2")
    {
        system ("cls");
        cout << "Nomer 2"<<endl;
        cout << "Program array untuk menampilkan value yang telah ditentukan pada soal\n\n";

        // membuat array 
        int nilai[10];
 
        // mengisi elemen array
        nilai[0] = 1;
        nilai[1] = 2;
        nilai[2] = 3;
        nilai[3] = 5;
        nilai[4] = 7;
        nilai[5] = 11;
        nilai[6] = 13;
        nilai[7] = 17;
        nilai[8] = 19;
        nilai[9] = 23;
 
        // mencetak isi array
        for(int i = 0; i < 10; i++){
            cout <<"Indeks ke- "<<i<<" bernilai : "<< nilai[i]<<endl;
        }

    }if (pilih == "3")
    {
        system ("cls");
        cout << "Nomer 3"<<endl;
        cout << "Program matriks\n\n";

        double a[10][10],b[10][10],c[10][10],d[10][10];
        int i,j,k,r;
  
        cout<<endl<<" Elemen matriks A : "<<endl;
        
        for (i=1; i<=2;i++){
            for (j=1;j<=2;j++){
                cout<<" Elemen matrik A baris ke-"<<i<<" kolom ke-"<<j<<": ";
                cin>>a[i][j];
            }
        }
 
        cout<<endl<<" Elemen matriks B : "<<endl;
        
        for (i=1; i<=2;i++){
            for (j=1;j<=2;j++){
                cout<<" Elemen matrik B baris ke-"<<i<<" kolom ke-"<<j<<": ";
                cin>>b[i][j];
            }
        }
        cout<<endl;
 
 
        for (i=1;i<=2;i++){
            for (j=1;j<=2;j++){
                c[i][j]=0;
                for (k=1;k<=2;k++){
                    r=a[i][k]*b[k][j];
                    c[i][j]=c[i][j]+r;
                }
            }
        }
 
        cout<<"Element matriks C [hasil] : "<<endl;
        
        for (i=1;i<=2;i++){
            for (j=1;j<=2;j++){
                cout<<" "<<c[i][j];
            }
            cout<<endl;
        }
 
        cout<<"Transpose matriks"<<endl;
        for(int i=1;i<=2;i++){
            for(int j=1;j<=2;j++){
                d[j][i]=c[i][j];
            }
        }

        for(int i=1;i<=2;i++){
            for(int j=1;j<=2;j++){
                cout<<" "<<d[i][j];
            }
            cout<<endl;
        }
    }

    cout << "\nKembali memilih nomer <y/n> : "; cin >> ulang;
    } while (ulang == "y");

    cout << "Terima kasih"<<endl;
    cout << "Muhamad Bayu Fadayan_065121100\n\n";
    getch();
    return 0;
}