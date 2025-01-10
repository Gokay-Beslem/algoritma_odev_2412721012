#include <iostream>
#include <string>

using namespace std;

struct Kumas {
    string ipliktipi;
    double dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};

struct Iskelet {
    string malzeme;
    string birlestirme;
    string tarz;
    string boyut;
    int miktar;
};

struct Mobilya {
    Kumas kaplama;
    Iskelet malzeme;
    int fiyat;
    int adet;
};

void veriGirisi(Mobilya &urun) {
    cout << "Kaplama bilgilerini giriniz:\n";
    cout << "Iplik Tipi: ";
    cin >> urun.kaplama.ipliktipi;
    cout << "DM2 Agirlik: ";
    cin >> urun.kaplama.dm2agirlik;
    cout << "Dokuma Tipi: ";
    cin >> urun.kaplama.dokumatipi;
    cout << "Renk: ";
    cin >> urun.kaplama.renk;
    cout << "Miktar: ";
    cin >> urun.kaplama.miktar;

    cout << "Iskelet bilgilerini giriniz:\n";
    cout << "Malzeme: ";
    cin >> urun.malzeme.malzeme;
    cout << "Birlestirme: ";
    cin >> urun.malzeme.birlestirme;
    cout << "Tarz: ";
    cin >> urun.malzeme.tarz;
    cout << "Boyut: ";
    cin >> urun.malzeme.boyut;
    cout << "Miktar: ";
    cin >> urun.malzeme.miktar;

    cout << "Fiyat: ";
    cin >> urun.fiyat;
    cout << "Adet: ";
    cin >> urun.adet;
}

void verileriListele(const Mobilya &urun) {
    cout << "Kaplama Bilgileri:\n";
    cout << "Iplik Tipi: " << urun.kaplama.ipliktipi << endl;
    cout << "DM2 Agirlik: " << urun.kaplama.dm2agirlik << endl;
    cout << "Dokuma Tipi: " << urun.kaplama.dokumatipi << endl;
    cout << "Renk: " << urun.kaplama.renk << endl;
    cout << "Miktar: " << urun.kaplama.miktar << endl;

    cout << "Iskelet Bilgileri:\n";
    cout << "Malzeme: " << urun.malzeme.malzeme << endl;
    cout << "Birlestirme: " << urun.malzeme.birlestirme << endl;
    cout << "Tarz: " << urun.malzeme.tarz << endl;
    cout << "Boyut: " << urun.malzeme.boyut << endl;
    cout << "Miktar: " << urun.malzeme.miktar << endl;

    cout << "Fiyat: " << urun.fiyat << endl;
    cout << "Adet: " << urun.adet << endl;
}

int main() {
    Mobilya urunler[10];
    double toplamFiyat = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Urun " << i + 1 << " bilgilerini giriniz:\n";
        veriGirisi(urunler[i]);
    }

    cout << "\nGirilen veriler:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "\nUrun " << i + 1 << ":\n";
        verileriListele(urunler[i]);
        toplamFiyat += urunler[i].fiyat * urunler[i].adet;
    }

    cout << "\n10 urunun toplam fiyati: " << toplamFiyat << endl;

    return 0;
}

