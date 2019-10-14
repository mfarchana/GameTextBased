#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>

//  Mochamad Farchan Ardiatama
//  Dinus University

using namespace std;

int main()
{
    int hasil_acak;
    string kataAsli;

    srand(static_cast<unsigned int>(time(0)));
    cout << "Masukan sebuah kata : ";
    cin >> kataAsli;
    string kataAcak = kataAsli;
    cout<< "\nKata : "<<kataAsli;
    cout<<"\nJumlah huruf : "<<kataAsli.size();

    cout<<"\n";
    int i=0;
    int jumlah_huruf = kataAsli.size();
    for (int i = 0; i < jumlah_huruf; i++) {
        int huruf1 = (rand() % jumlah_huruf);
        int huruf2 = (rand() % jumlah_huruf);
        char temp = kataAcak[huruf1];
        kataAcak[huruf1] = kataAcak[huruf2];
        kataAcak[huruf2] = temp;
    }

    cout<< "\nKataAcak : "<<kataAcak<< endl;
    return 0;
}
