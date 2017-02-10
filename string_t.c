#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// char address[30] = "123 Some Street, SomeCity, USA";
	// //					0123456789012345678901234567890123456

	// char name[40] = "FirstName, SecondName, ThirdName";
	// //				 0123456789012345678901234567890123456789

	char name[20], address[30];

	char c;
	printf("How do you feel on a scale of 1-5?");
	c = getchar();

	printf("Enter name: ");
	scanf("%s", name); // scanf("%s", &name);

	printf("Enter address: ");
	scanf("%s", address);

	printf("Feelings: ")
	putchar(c);
	printf("Name: %s\n", name);
	printf("Address: %s\n", address);

	return EXIT_SUCCESS;
}