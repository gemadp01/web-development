#include<stdio.h>

// agar input tidak enter terlebih dahulu, dengan getch(); = getchar (beda dengan getchar();)
#include<conio.h>

// standard library, contoh system("csl")
#include<stdlib.h>

int main() {
	
//	array of string
/* 
	untuk isi di lebihkan 1 (satu) 
	karena di akhir string terdapat null/string kosong/char kosong	
	\0
*/
//	map
	char matrix[][6] = {"*****", 
						"*****", 
						"*****", 
						"*****", 
						"*****"};
	
//	koordinat horizontal dan vertical
	int playerX = 0, playerY = 0;
//	nama player, tiap print akan diganti
	char player = 'P';
	char input;
	
	while(true) {
//		print map
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
//				manipulasi print, jika koordinat pas di player print player jika tidak print *
				if(playerX == j && playerY == i) {
					printf("%c", player);	
				} else {
					printf("*");
				}
			}
			printf("\n");
		}
		input = getch();
	
//		melakukan perpindahan/validasi
		switch(input) {
			case 'w':
				playerY -= 1;
			break;
			case 'a':
				playerX -= 1;
			break;
			case 's':
				playerY += 1;
			break;
			case 'd':
				playerX += 1;
			break;
		}
//		setiap input dibersihkan/clear console
		system("cls");
	}
	
	
	
	
	
	
	
	
	return 0;
}
