#include <stdio.h>
#include <string.h>

// draw functions prototypes
void amongus();
void square(int n);

// takes a string as argument and runs
// the appropriate drawing function
void draw(const char* s) {
	if(strcmp(s, "quadrato") == 0 || strcmp(s, "square") == 0) square(10);
	if(strcmp(s, "amongus") == 0) amongus();
}

// draw functions

void amongus() {
	printf("ඞ\n");
}

void square(int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("#");
		}
		puts("");
	}
}
