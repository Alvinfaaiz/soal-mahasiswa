#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

void inputMahasiswa(Mahasiswa &mhs);
void tampilkanData(const Mahasiswa mhs);
float hitungRataanIpk(Mahasiswa mhs[], int totMhs);

#endif // DATAMHS_H_INCLUDED
