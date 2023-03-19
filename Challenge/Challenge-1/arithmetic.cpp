// input, variabel dalam bentuk integer

#include<stdio.h>


int main() {
	
	int angkaPertama, angkaKedua;
	
//	Penjumlahan
	scanf("%d %d", &angkaPertama, &angkaKedua);
	printf("%d\n", angkaPertama+angkaKedua);
	getchar();

//	Pengurangan
	scanf("%d %d", &angkaPertama, &angkaKedua);
	printf("%d\n", angkaPertama-angkaKedua);
	getchar();

//	Perkalian
	scanf("%d %d", &angkaPertama, &angkaKedua);
	printf("%d\n", angkaPertama*angkaKedua);
	getchar();

//	Pembagian
	scanf("%d %d", &angkaPertama, &angkaKedua);
	printf("%d\n", angkaPertama/angkaKedua);
	getchar();

//	Modulus (Sisa Bagi)
	scanf("%d %d", &angkaPertama, &angkaKedua);
	printf("%d\n", angkaPertama%angkaKedua);
	getchar();

	return 0;
}
