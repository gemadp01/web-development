#include<stdio.h>

int main() {
	
	
	// pointer adalah penunjuk (menunjuk alamat dari sebuah variabel). contoh Linked List
	/* 
		variabel a menyimpan value 0 dengan alamat 123 (contoh)
		variabel b menyimpan alamat a
		dimana ketika kita tidak punya akses ke variabel a
		kita dapat memanfaat variabel untuk memanggil variabel a lewat variabel b tadi
		yang menyimpan alamat dari variabel a
	*/
	int a = 0;
	
//	pembeda variabel biasa dengan pointer ialah
//	didepan varibel pointer terdapat asterisk (*)
	int *p;
	
//	membuat pointer dari sebuah pointer
	int **p2; 
	
//	&, alamat
	p = &a;
	p2 = &p;
	
	printf("%d\n", &a);
	
//	alamat p = alamat A -> p2 = alamat P
//	kita menunjuk ke alamat yang ada di p, karena p mempunyai alamat &a
	printf("%d\n", *p2);
	
//	untuk mendapatkan value a, kita kasih pointernya *p 
//	karena sebelumnya sudah menyimpan alamat dari variabel a
	printf("%d\n", &p);
	
	
	
	
	
	
	return 0;
}
