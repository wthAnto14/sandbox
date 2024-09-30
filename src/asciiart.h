#include <stdio.h>
#include <string.h>

// draw functions prototypes
void amongus();
void square(int n);
void iusearchbtw();
void circle();

// takes a string as argument and runs
// the appropriate drawing function
void draw(const char* s) {
	if(strcmp(s, "quadrato") == 0 || strcmp(s, "square") == 0) square(10);
	if(strcmp(s, "amongus") == 0) amongus(10);
	if(strcmp(s, "archlogo") == 0 || strcmp(s, "iusearchbtw") == 0) iusearchbtw();
	if(strcmp(s, "cerchio") == 0 || strcmp(s, "circle") == 0) circle();
}

// draw functions

void amongus(int i) {
	while(i>0){
		printf("ඞ");
		i--;
	}
	printf("\n");
}

void square(int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("#");
		}
		puts("");
	}
}

void iusearchbtw() {
	printf("                  -`                 \n");
	printf("                 .o+`                \n");
	printf("                `ooo/                \n");
	printf("               `+oooo:               \n");
	printf("              `+oooooo:              \n");
	printf("              -+oooooo+:             \n");
	printf("            `/:-:++oooo+:            \n");
	printf("           `/++++/+++++++:           \n");
	printf("          `/++++++++++++++:          \n");
	printf("         `/+++ooooooooooooo/`        \n");
	printf("        ./ooosssso++osssssso+`       \n");
	printf("       .oossssso-````/ossssss+`      \n");
	printf("      -osssssso.      :ssssssso.     \n");
	printf("     :osssssss/        osssso+++.    \n");
	printf("    /ossssssss/        +ssssooo/-    \n");
	printf("  `/ossssso+/:-        -:/+osssso+-  \n");
	printf(" `+sso+:-`                 `.-/+oso: \n");
	printf("`++:.                           `-/+/\n");
	printf(".`                                 `/\n");
}

void circle(){
	printf("()");
}
