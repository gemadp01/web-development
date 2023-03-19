#include<stdio.h>






int main() {
	
	
	int alamat[10];
	int size = 10;
	
	for(int i = 0; i < size; i++) {
		
		alamat[i] = 0;
		
	}
	
	for(int i = 0; i < size; i++) {
		
		printf("%d = %d", i, &alamat[i]);
		printf("\n");
	}
	
	int *a, b;
	scanf("%d %d", &a, &b);
	
	*a = b;
	
	
	for(int i = 0; i < size; i++) {
		
		printf("%d = %d", i, alamat[i]);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
