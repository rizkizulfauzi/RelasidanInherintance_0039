#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien{
    public:
    string nama;
    vector<dokter*>daftar_dokter;
    pasien(string pNama) : nama(pNama) {
        cout <<"pasien \"" << nama << "\" ada\n";
    }
    ~pasien(){
        cout << "pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter *pDokter);
    void cetakDokter();
};

class dokter{
    public:
    string nama;
    vector<pasien *> daftar_pasien;
    dokter(string pNama) : nama(pNama) {
        cout <<"dokter\"" << nama <<"\" ada\n";
    }
    ~dokter(){
        cout <<"dokter\""<<nama <<"\"tidak ada\n";
    }
    void tambahPasien(pasien *);
    void cetakPasien(); 
};

void pasien::tambahDokter(dokter *pDokter){
    daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter(){
    cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
  for (auto& a : daftar_dokter){
    cout<< a->nama<<"\n";
  }
  cout <<endl;
}

int main(){
    dokter* varDokter1 = new dokter("dr.Asep");
    dokter* varDokter2 = new dokter("dr.Rudi");
    pasien* varPasien1 = new pasien("Budi");
    pasien* varPasien2 = new pasien("liaa");

    varDokter1->tambahPasien(varPasien1);
    varDokter1->tambahPasien(varPasien2);
    varDokter2->tambahPasien(varPasien1);


    varDokter1->cetakPasien();
    varDokter2->cetakPasien();
    varPasien1->cetakDokter();
    varPasien2->cetakDokter();

    delete varPasien1;
    delete varPasien2;
    delete varDokter1;
    delete varDokter2;
    return 0;
}