#include <stdio.h>
#include "src/asciiart.h"

int main() {
	printf("Printing amongus:\n");
	draw("amongus");
	printf("Printing square with default size:\n");
	draw("square");
	printf("Printing "circle" with default size:\n");
	draw("circle");
	return 0;
}
