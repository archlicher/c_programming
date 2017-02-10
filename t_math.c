#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	int days = 14 + 4 + 3;
	double w = 12.3;
	double h = 1.4;
	double perimeter = w * 2 + h * 2;

	printf("%d days\n", days);
	printf("Perimeter: %lf\n", perimeter);
	return EXIT_SUCCESS;
}