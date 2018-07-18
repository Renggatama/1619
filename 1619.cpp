#include <iostream>
#include <conio.h>

using namespace std;

//Base Class
class Pelanggan{
	protected : 
		int nik;
		string nama;
		string tujuan;
		string waktu;
		string hari;
		int kursi;
	
	public :
		void Nik(int i){
			nik = i;
		}
		string Nama(string n){
			nama = n;
		}
		string Tujuan(string t){
			tujuan = t;
		}
		string Waktu(string w){
			waktu = w;
		}
		string Hari(string h){
			hari = h;
		}
		int setKursi(int k){
			kursi = k;
		}
};

//Derived Class
class Data_diri: public Pelanggan{
	public:
		int getNik(){
			return nik;
		}
		string getNama(){
			return nama;
		}
};

//Derived Class
class Tiket: public Pelanggan{
	public:
		string getTujuan(){
			return tujuan;
		}
		string getWaktu(){
			return waktu;
		}
		string getHari(){
			return hari;
		}
		int getKursi(){
			kursi = 0;
			return kursi++;
		}
};

Pelanggan pel;
Data_diri data;
Tiket tik;
int login();
int isiData();
int isiWaktu();
int tampil();

int main(){
	int i;
	for (i=1; i>0; i++){
	login();
	isiData();
	isiWaktu();
	tampil();
	}
}

int login(){
	system("cls");
	char pil;
	cout << "=======================================" << endl;
	cout << "            Selamat Datang" << endl;
	cout << "       Di Pelayanan Penerbangan" << endl;
	cout << "           Maskapai Diakad" << endl;
	cout << "=======================================" << endl;
	cout << "Tekan Tombol Enter Untuk Melanjutkan ..." << endl;
	getch();
	return 0;
}

int isiData(){
	//data diri
	initiateData:
	system("cls");
	string n, t;
	int i;
	char validation;
	cout << "========================================" << endl;
	cout << "    Silahkan Masukan Data Diri Anda" << endl;
	cout << "========================================" << endl;
	cout << "Nama\t: "; cin >> n;
	cout << "NIK\t: "; cin >> i;
	cout << "Tujuan\t: "; cin >> t;
	cout << "Apakah data sudah benar? Y/N" << endl;
	cin >> validation;
	if(validation == 'y' || validation == 'Y'){
		pel.Nama(n);
		pel.Nik(i);
		pel.Tujuan(t);
	}
	else if(validation == 'n' || validation == 'N'){
		goto initiateData;
	}
	
	cout << "Tekan Tombol Enter Untuk Melanjutkan ..." << endl;
	getch();
	return 0;
}
	
int isiWaktu(){
	//waktu
	initiateWaktu:
	system("cls");
	string h, w;
	char validation2;
	cout << "=======================================" << endl;
	cout << "      Silahkan Pilih Jadwal Anda" << endl;
	cout << "=======================================" << endl;
	cout << "Senin\t08.30 11.00 16.00" << endl;
	cout << "Selasa\t09.30 12.00 18.00" << endl;
	cout << "Rabu\t10.30 14.00 20.00" << endl;
	cout << endl;
	cout << "Hari\t: "; cin >> h;
	cout << "Pukul\t: "; cin >> w;
	cout << "Apakah data sudah benar? Y/N" << endl;
	cin >> validation2;
	if(validation2 == 'y' || validation2 == 'Y'){
		pel.Waktu(w);
		pel.Hari(h);
	}
	else if(validation2 == 'n' || validation2 == 'N'){
		goto initiateWaktu;
	}
	
	cout << "Tekan Tombol Enter Untuk Melanjutkan ..." << endl;
	getch();
	return 0;
}

int tampil(){
	//tiket
	initiateTiket:
	system("cls");
	char validation3;
	cout << "=======================================" << endl;
	cout << "            MASKAPAI DIAKAD" << endl;
	cout << "   Alamat Daerah Istimewa Yogyakarta" << endl;
	cout << "=======================================" << endl;
	cout << "          Tiket Keberangkatan" << endl;
	cout << "       No. Penerbangan Boing 1020" << endl;
	cout << endl;
	cout << "Nama\t\t: " << data.getNama() << endl;
	cout << "NIK\t\t: " << data.getNik() << endl;
	cout << "Tujuan\t\t: " << tik.getTujuan() << endl;
	cout << "Hari/Waktu\t: " << tik.getHari() << "/" << tik.getWaktu() << endl;
	cout << "No. Kursi\t: " << tik.getKursi() << endl;
	cout << "=======================================" << endl;
	cout << endl;
	cout << "Apakah data sudah benar? Y/N" << endl;
	cin >> validation3;
	if(validation3 == 'y' || validation3 == 'Y'){
		goto initiateKeluar;
	}
	else if(validation3 == 'n' || validation3 == 'N'){
		isiData();
	}
	
	//keluar
	initiateKeluar:
	cout << endl;
	cout << "Tekan Tombol Enter Untuk Cetak dan Keluar ..." << endl;
	getch();
	return 0;
}
