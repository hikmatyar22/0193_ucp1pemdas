//1) Berikut beberapa Deklarasi Variabel :
//a. int = variabel int digunakan untuk menyatakan bilangan bulat positif,negatif maupun bilangan 0.
//   contoh : int nilaimatematika
//b. string = variabel string digunakan untuk menyatakan variabel yang berkaitan dengan Nama.
// contoh : string nama
//c. Float = variabel float digunakan untuk menyatakan bilangan pecahan atau bilangan decimal.
//  contoh : float gajipegawai

//2)conditional statment adalah struktur pemograman yang dimana terdapat beberapa kondisi  tertntu yang dibuat untuk menjadi syarat.
// contoh : terdapat beberapa bilangan acak antara 1-6, apabila bilangan yang muncul jika dibagi 2 hasilnya 0 maka bilangan tersebut bernilai "genap" dan jika dibagi tidak habis/hasilnya tidak 0 maka bilangan tersebut bernilai "ganjil".
//   if (nBilangan % 2 == 0) {
//     status = "Genap";
//   }
//     else {
//       status = "Ganjil";
//   }

//3) Struct merupakan salah satu struktur pemograman untuk membuat kumpulan data / struktur data.
// contoh : terdapat sebuah pemograman dimana membutuhkan data mahasiswa, maka diperlukan struct untuk membuat struktur data yang isinya berkaitan dengan inforamsi tentang mahasiswa tersebut seperti nim,nama,alamat dan umur.
//   struct Mahasiswa {
//              string nim;
//              string nama;
//              string alamat;
//              int umur;
//           };
//   int main() {
//      Mahasiswa mhs;
//   }

//4) prosedur merupakan struktur pemograman yang berisi kumpulan pernyataan untuk menjalankan tugas tertentu dan besifat tidak mengembalikan nilai serta melewatkan nilai
//   contoh : 
// void prosedurluas(int p, int l)
// {
//       	luas = p * l;
// }
// fungsi merupakan struktur pemograman yang berisi program untuk menjalankan tugas dan bersifat mengembalikan niai.
// contoh:
// int fungsiluas(int p, int l)
// {
//	 return p * l;
// }
//
//5) looping merupakan struktur pemograman untuk pengulangan tugas secara berulang kali
// looping ada 3 yakni for, while dan do..while
// contoh :
//   do
//  {
//	  cout << "Perulangan Do..While" << endl;
//	   x = rand() % 10;

//	  cout << "Nilai Awal : " << x << endl;
//    } while (x > 4);




#include <iostream>
using namespace std;

int hitungrerata()
{

	int nMatematika, nBahasainggris, nRerata;
	string status;

	cout << "Masukan nilai Matematika = ";
	cin >> nMatematika;

	cout << "Masukan nilai Bahasa Inggris = ";
	cin >> nBahasainggris;

	nRerata = (nMatematika + nBahasainggris) / 2;


	if (nRerata > 70) {
		status = "LULUS";
	}

	else if (nMatematika > 80) {
		status = "LULUS";
	}
	else {
		status = "TIDAK LULUS";
	}

	cout << "Reratanya adalah = " << nRerata << endl;
	cout << "Statusnya adalah = " << status << endl;

}

int main() {
    string nama[20];
    int nilaiMatematika[20];
    int nilaiBahasaInggris[20];
    string status[20];

    
    cout << "Masukkan data pendaftar:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Nama pendaftar ke-" << i + 1 << ": ";
        cin >> nama[i];
        cout << "Nilai Matematika: ";
        cin >> nilaiMatematika[i];
        cout << "Nilai Bahasa Inggris: ";
        cin >> nilaiBahasaInggris[i];

    }

    cout << endl << "Nama\tStatus" << endl;
    for (int i = 0; i < 20; i++) {
        cout << nama[i] << "\t" << status[i] << endl;
    }

    return 0;
}




