#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str1[20], str2[20];
	//sc 1
	puts("--- Scenario 1 ---");
	strcpy(str1, "Anybody");
	strcpy(str2, "Anybody home?");

	int len1 = strlen(str1);
	printf("Lenght of str 1 is: %d\n", len1);

	int len2 = strlen(str2);
	printf("Lenght of str 2 is: %d\n", len2);

	printf("Return value is : %d\n", strcmp(str1, str2));

	//sc 2
	puts("--- Scenario 2 ---");
	strcpy(str1, "your house");
	strcpy(str2, "my house");

	len1 = strlen(str1);
	printf("Lenght of str 1 is: %d\n", len1);

	len2 = strlen(str2);
	printf("Lenght of str 2 is: %d\n", len2);

	printf("Return value is : %d\n", strcmp(str1, str2));

	//sc 3
	puts("--- Scenario 3 ---");
	strcpy(str1, "our house");
	strcpy(str2, "our house");

	len1 = strlen(str1);
	printf("Lenght of str 1 is: %d\n", len1);

	len2 = strlen(str2);
	printf("Lenght of str 2 is: %d\n", len2);

	printf("Return value is : %d\n", strcmp(str1, str2));

	return EXIT_SUCCESS;
}