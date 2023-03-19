//	key, batas bawah dan batas atas


#include<stdio.h>


int main() {
	
	int key, batasBawah, batasAtas;
	
	scanf("%d", &key);
	scanf("%d %d", &batasBawah, &batasAtas);
	
	
	if(key >= batasBawah && key <= batasAtas) {
		printf("%d diantara %d dan %d", key, batasBawah, batasAtas);
	} else printf("%d bukan diantara %d dan %d", key, batasBawah, batasAtas);
	
	
	
	
	
	
	return 0;
}
