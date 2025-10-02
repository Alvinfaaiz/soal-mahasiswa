#include <iostream>
#include "mahasiswa.h"

void inputMahasiswa(Mahasiswa &mhs){
    cout << "Nama       : ";
    getline(cin, mhs.nama);
    cout << "NIM        : ";
    cin >> mhs.nim;
    cout << "IPK        : ";
    cin >> mhs.ipk;
}
void tampilkanData(Mahasiswa mhs){
    cout << " Nama      : " << mhs.nama << endl;
    cout << " NIM       : " << mhs.nim << endl;
    cout << " IPK       : " << mhs.ipk << endl;
}
float hitungRataanIpk(Mahasiswa mhs[], int totalMhs){
    float totalIpk = 0;
    for (int i = 0; i < totalMhs; i++){
        totalIpk += mhs[i].ipk;
    }
    return totalIpk / totalMhs;
}
