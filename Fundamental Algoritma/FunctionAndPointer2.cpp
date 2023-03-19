#include<stdio.h>

//	
//	fungsi mempunyai 2 karakteristik, yang dapat mengembalikkan nilai ada yang tidak
//	void yang tidak mengembalikkan nilai
	void printHelloWorld() {
		printf("Hello World!");
	}
	
//	yang bertipe data merupakan yang mengembalikkan nilai
	int getNumber() {
		return 5;
	}
	
//	Passing by Value
//	int sum(int first, int second) {
//		int total = first + second;
//		return total;
//	}

//	Passing by Referencee
	int sum(int *first, int *second) {
		printf("Alamat = %d\n", first)
//		harus memakai asterisk karena kalau tidak maka alamat &first yang di panggil
		int total = *first + *second;
		return total;
	}
	
	
//	seperti int main() {} merupakan fungsi yang pertama kali program berjalan
	int main() {
		
		
		
		
		
		
/* 
	Fungsi mempunyai Passing Parameter
	Passing Paremeter ialah kita memberikan value yang dibutuhkan fungsi
	- Passing by Value
	- Passing by Referencee
*/	
		

		
		
	int a = getNumber();
	printf("%d\n", getNumber());
	
//	Variabel didalam fungsi berbeda dengan variabel di luar fungsi
//	walaupun nama variabel tersebut sama
	int first = 3;
	int second = 5;
	
//	passing by value				
//	int hasilSum = sum(3, 5);
//	printf("%d", hasilSum);
	
//	passing by reference
int hasilSum = sum(&first, &second);

	
	
	return 0;
}
