#include<stdio.h>
#include<string.h>

int main() {
	
//	Challenge Mengubah kata acak dengan huruf kapital/non kapital menjadi kapital semua
// tanpa library string.h
	
//	char kataAcak[3] = "tesT";
//	char abjad[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//	printf("%s", abjad[0]);
//	char kata[] = "heLlO";
//	
//	scanf("%s", kata);
//	for(int i = 0; i < 4; i++) {
//		
//	}


//	ASCII, sebuah bilangan integer dari sebuah karakter
//	printf("%d\n", 'a'); //a dengan ASCII 97
//	printf("%d\n", 'z'); //a dengan ASCII 122
//	printf("%d\n", 'A'); //a dengan ASCII 65
//	printf("%d\n", 'Z'); //a dengan ASCII 90


	char str[30];

//	%[sampai enter\n], mau spasi apapun itu tetap di ambil	
	scanf("%[^\n]", str);
//	getchar buat ngilangin input stream enternya
	getchar();
	
//	strlen(variabel), fungsi dari library string.h - untuk menghitung panjang
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++) {
//		if(str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= 32;
//		}
		if(str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}
	}
	printf("%s", str);
	
//	printf("%s", strupr(str));
//	printf("%s", strlwr(str));
	return 0;
}
