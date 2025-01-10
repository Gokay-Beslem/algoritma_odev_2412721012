#include <iostream>
#include <string>

using namespace std;

struct Kisi {
    string adi_soyadi;
    string adresi;
    string telefon_no;
};

struct Gonderi {
    int gonderi_no;
    double agirlik;
    double hacim;
    char garanti; // 'e' (evet) veya 'h' (hayir)
    double ucret;
    Kisi gonderen;
    Kisi alici;
};

struct Kurye {
    string adi_soyadi;
    string telefon_no;
};

void veriGirisi(Gonderi &gonderi, int no) {
    cout << "Gonderi " << no + 1 << " bilgilerini giriniz :\n";

    cout << "Gonderen bilgilerini giriniz :\n";
    cout << "Adi Soyadi : ";
    getline(cin, gonderi.gonderen.adi_soyadi);
    cout << "Adresi : ";
    cin.ignore();
    getline(cin, gonderi.gonderen.adresi);
    cout << "Telefon No : ";
    getline(cin, gonderi.gonderen.telefon_no);

    cout << "Alici bilgilerini giriniz :\n";
    cout << "Adi Soyadi : ";
    getline(cin, gonderi.alici.adi_soyadi);
    cout << "Adresi : ";
    cin.ignore();
    getline(cin, gonderi.alici.adresi);
    cout << "Telefon No : ";
    getline(cin, gonderi.alici.telefon_no);

    cout << "Gonderi bilgilerini giriniz :\n";
    cout << "Gonderi No : ";
    cin >> gonderi.gonderi_no;
    cout << "Agirlik : ";
    cin >> gonderi.agirlik;
    cout << "Hacim : ";
    cin >> gonderi.hacim;
    cout << "Garanti (e/h) : ";
    cin >> gonderi.garanti;
    cout << "Ucret : ";
    cin >> gonderi.ucret;
}

void verileriListele(const Gonderi &gonderi, int no) {
    cout << "Gonderi " << no + 1 << " bilgileri :\n";

    cout << "Gonderen Bilgileri :\n";
    cout << "Adi Soyadi : " << gonderi.gonderen.adi_soyadi << endl;
    cout << "Adresi : " << gonderi.gonderen.adresi << endl;
    cout << "Telefon No : " << gonderi.gonderen.telefon_no << endl;

    cout << "Alici Bilgileri :\n";
    cout << "Adi Soyadi : " << gonderi.alici.adi_soyadi << endl;
    cout << "Adresi : " << gonderi.alici.adresi << endl;
    cout << "Telefon No : " << gonderi.alici.telefon_no << endl;

    cout << "Gonderi Bilgileri :\n";
    cout << "Gonderi No : " << gonderi.gonderi_no << endl;
    cout << "Agirlik : " << gonderi.agirlik << endl;
    cout << "Hacim : " << gonderi.hacim << endl;
    cout << "Garanti : " << (gonderi.garanti == 'e' ? "Evet" : "Hayir") << endl;
    cout << "Ucret : " << gonderi.ucret << endl;
}

int main() {
    Gonderi gonderiler[5];

    for (int i = 0; i < 5; ++i) {
        veriGirisi(gonderiler[i], i);
    }

    cout << "\nGirilen gonderi bilgileri :\n";
    for (int i = 0; i < 5; ++i) {
        verileriListele(gonderiler[i], i);
    }

    return 0;
}

