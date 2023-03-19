#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
	rectangle luasbangunan;
}info;


info infoBangunan[100];
int banyakBangunan = 0;

info tambahBangunan() {

	
	char name[200];
	int age, length, width;
	
	printf("Input nama pemilik : ");
	scanf("%s", name);getchar();
		
	printf("Input umur pemilik : ");
	scanf("%d", &age);getchar();
		
	printf("Input lebar bangunan : ");
	scanf("%d", &length);getchar();
				
	printf("Input panjang bangunan : ");
	scanf("%d", &width);getchar();
	
	info infoBaru = {{"", age}, {length, width}};
	strcpy(infoBaru.pemilik.name, name);

	return infoBaru;
}


void lihatBangunan() {
	
	for(int i = 0; i < banyakBangunan; i++) {
		
		info bangunan = infoBangunan[i];
		
		printf("%s berumur %d memiliki luas bangunan %d", 
			bangunan.pemilik.name, bangunan.pemilik.age,
			bangunan.luasbangunan.width*bangunan.luasbangunan.length
		);
		
	}
	
}

int main() {
	
	int input = 0;
	
	do {
		system("cls");
		printf("1. Tambah\n");
		printf("2. Lihat\n");
		printf("3. Exit\n");
		scanf("%d", &input); getchar();
		
		switch(input) {
			case 1:
				infoBangunan[banyakBangunan++] = tambahBangunan();
			break;
			case 2:
				lihatBangunan();
				getchar();
			break;
		}
		
	}while(input != 3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
