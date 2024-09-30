#include <stdio.h>
#include "src/asciiart.h"

int main() {
	printf("Printing default amount (10) of amongus:\n");
	draw("amongus");
	printf("Printing square with default size:\n");
	draw("square");
	printf("Printing arch logo:\n");
	draw("archlogo");
	printf("Printing circle:\n");
	draw("circle");
	return 0;
}
