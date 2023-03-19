#include<stdio.h>
#include<string.h>






int main() {
//	convert ASCII
//	char a = 'a';
//	
//	printf("%d", a);
//	printf("%d", 'g');	
	
	char str[50];
	
	scanf("%[^\n]", str);
	
	int length = strlen(str);
	
//	for(int i = 0; i < length; i++) {
//		
//		if(str[i] >= 97 && str[i] <= 122) {
//			
//			str[i] -= 32;
//			
//		}
//		
//	}
//	printf("%s", str);
//	

printf("%s", strupr(str));
printf("%s", strlwr(str));
	
	return 0;
}
