#include <string.h>

// takes a string as argument and runs
// the appropriate drawing function
void draw(const char* s) {
	if(strcmp(s, "quadrato") == 0) quadrato();
}
