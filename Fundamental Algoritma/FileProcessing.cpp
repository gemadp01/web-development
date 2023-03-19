#include<stdio.h>

int main() {
	
	
//	Menyimpan File, Filebase/Database
//	File Proceccing, menyimpan file pada filebase

//	read (baca/load), write(tulis/save), append(menambahkan/add)
//	r -> read
//	w -> write
//	a -> append
//	r+ -> read, write (file harus sudah ada, apabila tidak ada nothing to do)
//	w+ -> read, write (file ada/tidak ada tetap dibuat)
//	a+ -> append, read ()
	
	
//	1. deklarasi/open/membuka file, process, close
	FILE *fp;
	
//	fp = fopen (Filename, mode);
	fp = fopen("data.txt", "w");
	
//	fileprintf
//	fprintf(fp <file yang mana>, format.....)
	fprintf(fp, "Hello World!");
	
	
//	fclose(file);
	fclose(fp);
	
	
	
	
	
	
	return 0;
}
