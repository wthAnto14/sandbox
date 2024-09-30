#include <stdio.h>
#include <string.h>

// draw functions prototypes
void amongus();

// takes a string as argument and runs
// the appropriate drawing function
void draw(const char* s) {
	//if(strcmp(s, "quadrato") == 0) quadrato(); // TODO: implement
	if(strcmp(s, "amongus") == 0) amongus();
}

// draw functions
void amongus() {
	printf("ඞ\n");
}
