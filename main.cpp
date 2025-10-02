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
        inputMahasiswa(mhs[i]);
    }

    cout << "============ Data Mahasiswa ============" << endl;
    for (int i = 0; i < totalMhs; i++){
        tampilkanData(mhs[i]);
    }

    cout << "\nRata-rata IPK dari " << totalMhs << " mahasiswa adalah " << hitungRataanIpk(mhs, totalMhs) << endl;

    return 0;
}
