#include<stdio.h>

int arr[] = {23, 4, 20, 1, 3, 5, 3, 4, 21, 6};
int length = 10;


void selectionSort() {
	
	for(int i = 0; i < length; i++ ) {
		int min = i;
		
		for(int j = i+1; j < length; j++) {
			
			if(arr[j] < arr[min]) min = j;
			
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
		
	}
	
}

void print() {
	
	for(int i = 0; i < length; i++) {
		
		printf("%d ", arr[i]);
		
	}
	
}

int linearSearch(int search) {
	
	for(int i = 0; i < length; i++) {
		
		if(arr[i] == search) {
			return i;
		}	
	}
	return -1;
	
}

int binarySearch(int search) {
	
	int low = 0;
	int high = length-1;
	
	while(low <= high) {
		
		int mid = (low + high)/2;
		
		if(arr[mid] == search) return mid;
		else if(search < arr[mid]) high = mid-1;
		else if(search > arr[mid]) low = mid+1;		
		
	}
	return -1;
	
}



int main() {
	
//	Linear, Binary Search (binary harus data yang sudah tersortir
	
	selectionSort();
	print();
	
	printf("\n");
		
//	int resultIndex = linearSearch(5);
	int resultIndex = binarySearch(5);
	if(resultIndex == -1) printf("Tidak ketemu");
	else printf("Index = %d", resultIndex);
	
	
	
	return 0;
}
