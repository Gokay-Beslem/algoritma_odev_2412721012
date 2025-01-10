#include <iostream>
#include <string>

using namespace std;

struct Otomobil {
    string marka;
    string model;
    int yil;
    char yakit; // 'B' (Benzin), 'D' (Dizel), 'G' (Gaz), 'H' (Hibrit)
    int km;
    double fiyat;
};

void veriGirisi(Otomobil &arac) {
    cout << "Aracin Markasini Giriniz : ";
    cin >> arac.marka;
    cout << "Aracin Modelini Giriniz : ";
    cin >> arac.model;
    cout << "Aracin Uretim Yilini Giriniz: ";
    cin >> arac.yil;
    cout << "Aracin Yakit Tipini Giriniz (B/D/G/H): ";
    cin >> arac.yakit;
    cout << "Aracin KM Degerini Giriniz : ";
    cin >> arac.km;
    cout << "Aracin Fiyatini Giriniz : ";
    cin >> arac.fiyat;
}

void verileriListele(const Otomobil &arac) {
    cout << "Aracin Markasi : " << arac.marka << endl;
    cout << "Aracin Modeli : " << arac.model << endl;
    cout << "Aracin Ureti Yili : " << arac.yil << endl;
    cout << "Aracin Yakit Tipi : " << arac.yakit << endl;
    cout << "Aracim KM'si' : " << arac.km << endl;
    cout << "Aracin Fiyati : " << arac.fiyat << endl;
}

int main() {
    Otomobil binek, suv, ticari;

    cout << "Binek arac bilgilerini giriniz:\n";
    veriGirisi(binek);

    cout << "\nSUV arac bilgilerini giriniz:\n";
    veriGirisi(suv);

    cout << "\nTicari arac bilgilerini giriniz:\n";
    veriGirisi(ticari);

    cout << "\nGirilen veriler:\n";

    cout << "\nBinek arac:\n";
    verileriListele(binek);

    cout << "\nSUV arac:\n";
    verileriListele(suv);

    cout << "\nTicari arac:\n";
    verileriListele(ticari);

    return 0;
}

