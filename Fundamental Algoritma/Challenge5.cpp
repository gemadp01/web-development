#include<stdio.h>

//void arr() {
//	
//	int arr[10];
//	
//	for(int i = 0; i < 10; i++) {
//		for(int j = 0; j < 10 ;j++) {
//			if(i == j) {
//				arr[i] = j;
//				printf("%d = %d", arr[i], &arr[i]);
//			}
//		}
//		printf("\n");
//	}
//	
//	for(int k = 0; k < 10; k++) {
//		arr[k] = 0;
//	}
//	
//}

int main() {
	
	
//	arr();
//	printf("%d = %d", arr[i], arr[k]);
//	int a = 0;
//	int *p;
//	int **p2;
//	p = &a;
//	p2 = &p;
//	
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%d\n", p2);
//	

	int arr[10];
	
	for(int i = 0; i < 10; i++) {
		arr[i] = 0;
		printf("%d = %d\n", i, &arr[i]);
	}
	
	int *a;
	int b;

	scanf("%d %d", &a, &b);
	
//	kita menunjuk alamat yang ada di *a (yang sebelumnya diisi dengan input)
//	dan dan mengubah value yang ada pada alamat tersebut dengan nilai pada b yang sudah diinput
	*a = b;
	
	for(int i = 0; i < 10; i++) {
		printf("%d = %d\n", i, arr[i]);
	}




	return 0;
}
