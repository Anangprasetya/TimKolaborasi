#include <iostream>
using namespace std;

class BaseProject {
	public :
		void input();

		void proses();

		void output();

	private :
		int banyak_cumiBakar;
		int banyak_udang;

		float diskon;
		float total_beli;
		float total_bayar;		
};

void BaseProject::input(){
	cout << "Pilihan menu pada sebuah restoran :\n";
	cout << "1) Cumi Bakar  Rp. 23.000\n";
	cout << "2) Udang       Rp. 18.000\n";

	cout << "Masukkan jumlah beli Cumi Bakar : "; cin >> banyak_cumiBakar;
	cout << "Masukkan jumlah beli Udang      : "; cin >> banyak_udang;
}

void BaseProject::proses(){
	// int banyak_cumiBakar = 2;
	// int banyak_udang = 3;

	int harga_cumiBakar = 23000;
	int harga_udang = 18000;

	int beli = (banyak_cumiBakar * harga_cumiBakar) + (banyak_udang * harga_udang);
	total_beli = float(beli);

	if (beli > 40000){
		diskon = total_beli * 0.1;
		total_bayar = total_beli - diskon;
	}
	else{
		diskon = 0;
		total_bayar = total_beli;
	}
}

void BaseProject::output(){
	// float diskon = 20000;
	// float total_beli = 50000;
	// float total_bayar = 30000;

	cout << " STRUK PEMBAYARAN \n";
	cout << "Total Pembelian  : " << total_beli << endl;
	cout << "Diskon           : " << diskon << endl;
	cout << "Total Pembayaran : " << total_bayar << endl;
}
