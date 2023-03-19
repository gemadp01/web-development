#include<stdio.h>



int main() {
	
	int matrix[3][3];
	int k[3];
	int total;
	
	for(int i = 0; i < 3; i++) {
		
		for(int j = 0; j < 3; j++) {
			
			scanf("%d", &matrix[i][j]);
			
		}
		
	}
	
	for(int i = 0; i < 3; i++) {
		
		for(int j = 0; j < 3; j++) {
			
			printf("%d ", matrix[i][j]);
			
		}
		printf("\n");
		
	}
	
	for(int i = 0; i < 3; i++) {
		
		for(int j = 0; j < 3; j++) {
			
			if(i == j) {
				k[i] = matrix[i][j];
			}
			
		}
		
	}

	for(int i = 0; i < 3; i++) {
		total *= k[i];
	}

	printf("%d", total);
	
	return 0;
}
