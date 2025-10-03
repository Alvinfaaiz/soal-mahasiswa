#include <iostream>
#include "mahasiswa.h"

using namespace std;



int main()
{
    int totalMhs;
    cout << "Masukkan jumlah mahasiswa  : ";
    cin >> totalMhs;

    Mahasiswa mhs[100];

    for (int i = 0; i < totalMhs; i++){
        cout << "Data mahasiswa ke-" << i+1 << endl;
        inputMahasiswa(mhs[i]);
        cout << "\n";
    }

    cout << "============ Data Mahasiswa ============" << endl;
    for (int i = 0; i < totalMhs; i++){
        cout << "Data mahasiswa ke-" << i+1 << endl;
        tampilkanData(mhs[i]);
        cout << "\n";
    }

    cout << "\nRata-rata IPK dari " << totalMhs << " mahasiswa adalah " << hitungRataanIpk(mhs, totalMhs) << endl;

    return 0;
}
