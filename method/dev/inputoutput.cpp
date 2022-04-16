#include "../base.h"

void BaseProject::input(){
	cout << "Pilihan menu pada sebuah restoran :\n";
	cout << "1) Cumi Bakar  Rp. 23.000\n";
	cout << "2) Udang       Rp. 18.000\n";

	cout << "Masukkan jumlah beli Cumi Bakar : "; cin >> banyak_cumiBakar;
	cout << "Masukkan jumlah beli Udang      : "; cin >> banyak_udang;
}

void BaseProject::output(){
	float diskon = 20000;
	float total_beli = 50000;
	float total_bayar = 30000;

	cout << " STRUK PEMBAYARAN \n";
	cout << "Total Pembelian  : " << total_beli << endl;
	cout << "Diskon           : " << diskon << endl;
	cout << "Total Pembayaran : " << total_bayar << endl;
}

int main(){
	BaseProject base;
	base.input();
	base.output();
	return 0;
}