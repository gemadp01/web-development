// memanggil library, untuk menjalankan perintah input/output
// #include<library.h>, h = header
#include<stdio.h>

// fungsi main, untuk menjalankan program kita (program pertama yang akan dijalankan)
int main() {
	
//	belum di inisialisasi
	int angkaBulat;
	
//	value dari variabel float angka diakhiri "f"
	float angkaReal = 1.5f;
	char karakter = 'a';
	
//	string (kalimat), char variabel[panjangkarakter] = "";
	char string[100] = "Hello";
	
//	fungsi didalam stdio
//	printformat, mengeluarkan
//	\n untuk membuat newline/enter
//	printf("Hello World!\nasd");

//	& = memberi tau alamat
//	variabel mempunyai alamat dan memberi tau ketika scanf input %d untuk &angkaBulat
//	dikirim ke variabel angkaBulat
	scanf("%d", &angkaBulat);
//	!meskipun kita inisialisi variabel dengan nilai
//	maka yang akan di simpan ialah input user

//	untuk menghindari input stream, gunakan getchar();
//	untuk mengambil karakter semisal kita membuat newline (\n)
	getchar();

// jangan lupa enter = \n
//	%d, format integer
	printf("Umur kamu = %d\n", angkaBulat);
		
//	
	scanf("%f", &angkaReal);
	getchar();
		
//	%f, format bilangan real
//	mengambil angka di belakang koma dengan .x (x = angka, .2 = 1.50 (2 angka di belakang koma))
	printf("%.2f\n", angkaReal);
	
//	
	scanf("%c", &karakter);
	getchar();
	
//	%c, format char
	printf("%c\n", karakter);
	
//	untuk string tidak memakai "&" tidak masalah, mau pake pun tidak masalah
//	karena sudah berbentuk pointer/array pada saat inisialisasi panjang karakter
//	scanf("%s", string);

//	untuk mengambil karakter
//	scanf("%[sampai, enter]", variabel);
scanf("%[^\n]", string);
	
//	%s, format string
	printf("%s\n", string);
	
//	untuk menerima input kita harus menyimpan input ke sebuah variabel, kemudian di printf
//	scanf()
	
	return 0;
}
