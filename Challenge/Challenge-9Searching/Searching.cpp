#include<stdio.h>

int arr[] = {23, 4, 20, 1, 3, 5, 3, 4, 21, 6};
int length = 10;


int linearSearch(int search) {
	
	for(int i = 0; i < length; i++) {
		
		if(arr[i] == search) return i;
		
	}
	return -1;
}

int binarySearch(int search) {
	
	int low = 0;
	int high = length-1;
	
	while(low <= high) {
		int mid = (low+high)/2;
		
		if(search == arr[mid]) return mid;
		else if(search < arr[mid]) high = mid-1;
		else if(search > arr[mid]) low = mid+1;
	}
	return -1;
	
}


int main() {
	
	
	
	//Linear, Binary
	
	
	
//	int resultIndex = linearSearch(21);
	int resultIndex = binarySearch(21);	
	if(resultIndex == -1) ("Tidak ketemu");
	printf("Index ke -%d", resultIndex);
	
	
	
	
	return 0;
}
