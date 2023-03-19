#include<stdio.h>

/* 
	penulisan struct bahasa c
	typedef struct rectangle
	typedef struct <optional> {
		int length;
		int width;
	}rectangle;
	
	.cpp = ext c++
	tapi karena extension yang dipakai .cpp (c++), maka bisa langsung
	struct rectangle{
		int length;
		int width;
	}
*/

typedef struct {
	int length;
	int width;
}rectangle;

typedef struct {
	char name[200];
	int age;
}person;

typedef struct {
	person pemilik;
	rectangle luasBangunan;
}info;


int main() {
	
//	Struct merupakan kumpulan sebuah variabel/grouping
//	membuat 20 kotak, dengan per satu index 1 kotak tapi hal ini tidak mendefinisikan
//	int length[20];
//	int width[20];

//	cara mengakses struct, struct <nama_struct> <nama_variabel>
//	struct rectangle kotak1;
//	kotak1.length = 10;

//	inisialisasi langsung
//	struct rectangle kotak1 = {	10, 5 };
	
//	penulisan tanpa (struct)
//	rectangle kotak1 = {10};
//	person orang1 = {"Player 1", 20};
//	person orang2 = {{'P', 'L', 'A', 'Y', 'E', 'R', '1'}};
	
		
//	printf("%d %d\n", kotak1.length, kotak1.width);
//	printf("%s\n", orang1.name);

	
	info infoBangunan = {{"Adi", 25}, {20, 10}};
	
	printf("%s berumur %d memiliki luas bangunan = %d\n",
			infoBangunan.pemilik.name, infoBangunan.pemilik.age,
			infoBangunan.luasBangunan.length * infoBangunan.luasBangunan.width);
	
	
	return 0;
}
