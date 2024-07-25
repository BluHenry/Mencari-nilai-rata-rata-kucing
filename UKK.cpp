#include <iostream>
#include <string>
#include <chanmgr.h>


using namespace std;

int soal_tiga (int kucing){

    int jumlah_kucing;
    cout << "jumlah kucing yg ada di smk TI airlangga = \n"; cin >> jumlah_kucing;
    
    int total[jumlah_kucing];

    cout << "rata rata panjang di setiap kucing \n";
    for (int i = 0; i < jumlah_kucing; i++)
    {
        cout << "kucing ke " << i+1 << ": ";
        cin >> total[i];
    }
    cout << " ... \n";
    

    for (int i = 0; i < jumlah_kucing; i++)
    {
        cout << "Panjang kucing ke " << i+1 << ": " << total[i] << ": \n";
    }



    int total_panjang;
    for (int i = 0; i < jumlah_kucing; i++)
    {
        total_panjang += total[i];
    }
    


    float RataRata_kucing = static_cast <float> (total_panjang) / jumlah_kucing;
    cout << "rata rata panjang disetiap kucing adalah = \n";
    cout << RataRata_kucing;

    

    










}



int main (){

    cout << "soal 1 (20%) \n";
    cout << "Buatlah sebuah program, lalu di dalamnya buat dua variabel untuk menyimpan nilai nama lengkap dan tempat tanggal lahir kalian masing-masing. Tampilkan nama dan tempat tanggal lahir tersebut ke layar. \n";

    string Nama;
    int Tanggal_lahir;
    cout << "masukkan Nama siswa = \n"; cin >> Nama;
    cout << "masukkan tahun lahir siswa = \n"; cin >> Tanggal_lahir;
    cout << "Nama siswa = \n" << Nama << endl;
    cout << "tanggal lahir siswa = \n" << Tanggal_lahir << endl;

    cout << "soal 2 (30%) \n";
    cout << "uat sebuah program yang menghitung nilai sisa bagi dari nomor induk siswa (NISN) kalian masing-masing dengan bilangan 4. Hasil dari sisa bagi tersebut akan menentukan jenis soal nomor 3 yang akan kalian kerjakan. Gunakan percabangan untuk menampilkan output sbb sesuai dari hasil sisa bagi \n";
    int Nisn, Nilai_sisa_bagi;
    cout << "masukkan Nisn Siswa = \n"; cin >> Nisn;

    Nilai_sisa_bagi = Nisn % 4;

    switch (Nilai_sisa_bagi)
    {

        case 0:
        cout << "kerjakan soal 3a \n";
        break;
        case 1:
        cout << "kerjakan soal 3b \n";
        break;
        case 2:
        cout << "kerjakan soal 3c \n";
        break;
        case 3:
        cout << "kerjakan soal 3d \n";
        break;

    }

    char Tiga;
    int kucing, soal_ketiga;
    cout << "Soal 3a (50%) \n";
    cout << "hitung rata rata panjang kucing \n";
    cout << "ingin menampilkan program soal ketiga ?? (y/n) \n";
    // cout << " ketik 1 untuk melanjutkan \n";
    // cout << "ketik 2 untuk memberhentikan program \n";
    cin >> Tiga;
    if (Tiga == 'y')
    {
        cout << soal_tiga(soal_ketiga) << endl;
    } else if (Tiga == 'n')
    {
        cout << "ok memberhentikan program \n";
    }else{
        cout << " yg bener lah ngetik nya dek dek \n";
    }
    
    



}



