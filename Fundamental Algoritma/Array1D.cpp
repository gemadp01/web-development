#include<stdio.h>
#include<string.h>

int main() {
	
//	array pada bahasa c harus satu tipe data, integer ya integer, float ya float
//	listAngka dengan 20 slot
	int listAngka[20];
	
//	string (pada bahasa c) merupakan array of char

	char str[20][100]; // string dibuat dengan string array
	
	
	scanf("%s", str[0]);
//	karena string merupakan array of char,
//	maka setiap hurufnya mempunyai index 
//	str[1] = 'a';

//	karena string tidak bisa langsung diganti dengan 
//	listAngka[0] = 1;
//	string harus include <string.h> yang didalamnya ada fungsi" untuk memanipulasi string itu sendiri
	
//	mengganti string yang sebelumnya di input dengan menggunakan fungsi strcpy
	strcpy(str[0], "Halo"); // mengubah versi string

	printf("%s\n", str[0]);
	
	
//	loker nomor 0, ada isi 1
//	listAngka[0] = 1;
//	printf("%d", listAngka[0]);
//	listAngka[0] = 2;
//	printf("%d", listAngka[0]);
	
	
	return 0;
}
