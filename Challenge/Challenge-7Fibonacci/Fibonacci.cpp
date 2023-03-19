#include<stdio.h>

//void helloWorld(int i) {
//	
//	if(i == -1) return;
//	
//	printf("%d\n", i);
//	helloWorld(i-1);
//	
//}
//void helloWorld(int i) {
//	
//	if(i == 5) return;
//	
//	printf("%d\n", i);
//	helloWorld(i+1);
//	
//}

int fibonacci(int i) {
	printf("Fibonacci ke - %d\n", i);
	if(i == 0) return 0;
	if(i == 1) return 1;
	
	return fibonacci(i-1) + fibonacci(i-2);
}

int main() {
	
	
	
	
	
	
	int hasilFibonacci = fibonacci(6);
	printf("%d", hasilFibonacci);
	
	
	
	return 0;
}
