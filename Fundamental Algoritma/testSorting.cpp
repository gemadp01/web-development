#include<stdio.h>

int arr[] = {5, 4, 7, 8, 1};
int length = 5;


void selectionSort() {
	
	for(int i = 0; i < length; i++) {
		
		int min = i;
		
		for(int j = i+1; j < length; j++) {
			
			if(arr[j] < arr[min]) {
				
				int temp = arr[j];
				arr[j] = arr[min];
				arr[min] = temp;

			}
			
			
		}
		
		
	}
	
}



void print() {
	
	for(int i = 0; i < length; i++) {
		
		printf("%d", arr[i]);
		
	}
	
		
}


int main() {


	selectionSort();
	print();



return 0;	
}
