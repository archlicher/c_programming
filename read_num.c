#include <stdio.h>

int main(void){
	int aNumber;
	printf("Enter a number: ");
	scanf("%d", &aNumber);
	printf("%d was entered!\n", aNumber);
	getchar();
	return 0;
}