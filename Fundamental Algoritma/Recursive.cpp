#include<stdio.h>


//	didalam recursive
//	harus ada kondisi dimana recursive tersebut berhenti 
void helloWorld(int i) {
//	void dengan return seperti ini bisa
//	return disini langsung memberhentikan fungsi helloWorld()
//	if(i == -1) return;
//	
//	printf("%d\n", i);
//	helloWorld(i-1);

	if(i == 5) return;
	
	
	helloWorld(i+1);
	printf("%d\n", i);
}

int main() {
	
	
	helloWorld(0);
	
	
	
	return 0;
}
