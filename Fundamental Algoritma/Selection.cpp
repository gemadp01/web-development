#include <stdio.h>

int main() {
	
	// SELECTION,
	/*
		Selection, untuk menyeleksi (melihat kondisi jika ini maka apa)
		Contoh ketika ingin bermain futsal
		Jika hujan maka tidak jadi
		Jika tidak hujan makan jadi
		Jadi, melihat sebuah kondisi maka apa yang terjadi?
	*/
	/*
		1. If, else if, else
		2. Switch case
		3. Ternary if 
	*/
	
	// =, "assign, memberi value/nilai ke variabel"
	// ==, "membandingkan"
//	int angka = 0;
	
	// Kalau angka 0 maka print "nol", kalau angka ganjil print "ganjil"
	// Kalau angka genpa print "genap"
	/*
		if satu satu merupakan if terpisah/if baru
		if gabungan menjadi satu, agar pengecekan dilakukan berurutan
		ketika kondisi if satu terpenuhi maka sisa if tidak akan di jalankan
	*/
//	if(angka == 0) {
//		printf("nol");
//	}
//	if(angka%2 == 1) {
//		printf("Ganjil");
//	}
//	if(angka%2 == 0) {
//		printf("Genap");
//	}

//	if(angka == 0) {
//		printf("nol");
//	}
//	jika yang lain
//	else if(angka%2 == 1) {
//		printf("Ganjil");
//	} else 
//	bisa else maupun else if
//	{ 
//		printf("Genap");
//	}
//	CTRL + /

//	kondisi ? benar : salah
//	kondisi ? benar : kondisi ? benar : salah
printf("%s", (angka < 2 ? "lebih kecil dari 2" :
				angka > 2 ? "lebih besar dari 2" : "2"));


/*
	PERBEDAAN IF DENGAN SWITCH CASE
	KALAU DI IF KITA BISA MENGECEK LEBIH BESAR SAMA DENGAN >= / MODULUS / OPERATORS
	
	DI SWITCH CASE UDAH PASTI "=="
*/


//	switch(variabel yang ingin dicek)
switch(angka) {
	case 1: // sama seperti mengecek variabel angka == 1
		printf("satu");
		// KETIKA CASE/KONDISI PERTAMA TRUE MAKA CASE DI BAWAHNYA AKAN DI EKSEKUSI JUGA
	// TERKECUALI CASE PERTAMA FALSE DAN CASE KEDUA TRUE MAKA CASE YANG FALSE TADI/YANG BERADA DIATAS CASE TRUE TIDAK AKAN DIEKSEKUSI
	// GUNAKAN break; untuk mengakhiri switch, maka akan berakhir
	// ketika case true dan break; maka switch akan berakhir
		break;
	case 5: // angka == 5
		printf("lima");
		break;
	default: // else
		printf("selain nol, satu, dan lima");
}


//	ternary, kondisi ? benar : salah

//	Pre Increment (++variabel) dimana variabel di tambah dulu kemudian di cetak 
//	int i = 0;
//	printf("%d\n", ++i);
//	printf("%d\n", i);
	
//	Post Increment (variabel++) dimana variable dicetak terus di tambah
//	int j = 0;
//	printf("%d\n", j++);
//	printf("%d", j);

//	Pre Decrement (--variabel)
//	Post Decrement (variabel--)	
}
