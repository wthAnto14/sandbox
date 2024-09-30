#include <stdio.h>
#include <string.h>

// draw functions prototypes
void amongus();

// takes a string as argument and runs
// the appropriate drawing function
void draw(const char* s) {
	while(true){
		//if(strcmp(s, "quadrato") == 0) quadrato(); // TODO: implement
		if(strcmp(s, "amongus") == 0){
			int i=0;
			scanf("%d",&i);
			amongus(i);
		}
		else if(strcmp(s, "square") == 0) square();
		else if(strcmp(s, "circle") == 0) square();
	}
}
void square(){
	printf("###\n###\n###\n");
}
void circle(){
	printf("()");
}
// draw functions
void amongus(int i;) {
	while(i>0){
		printf("ඞ");
		i--;
	}
	printf("\n");
}
