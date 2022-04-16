#include "../base.h"

void BaseProject::proses(){
	int banyak_cumiBakar = 2;
	int banyak_udang = 3;

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

int main(){
	BaseProject base;
	base.proses();
}