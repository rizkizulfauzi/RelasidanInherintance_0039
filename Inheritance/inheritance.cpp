#include <iostream>
#include <string>
using namespace std;

class orang{
    public:
    string nama;
    orang(string pNama):
    nama(pNama){
        cout <<"orang di buat\n"<<endl;
    }
    ~orang(){
        cout <<"orang dihapus\n" <<endl;
    }

    int jumlah(int a, int b){
        return a+b;
    }
};

class pelajar : public orang{
    public:
    string sekolah;
    pelajar(string pNama, string pSekolah) : orang(pNama),sekolah(pSekolah){
        cout <<"pelajar dibuat\n"<<endl;
    }
    ~pelajar(){
        cout <<"pelajar dihapus\n"<<endl;
    }
    string perkenalan(){
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n";
    }
};

int main(){
    pelajar siswa1("Asep laksono","SMK Negri 1 Yogykarta");
    cout <<siswa1.perkenalan();
    cout << "Hasil="<<siswa1.jumlah(10,90)<<endl;
    return 0;
}