#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asciiart.h"

int main() {
    draw("square");
}

void square(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("#");
        }
        puts("");
    }
}

void draw(char* shape) {
    printf("Input: %s\n", shape);
    if (strcmp(shape, "square") == 0) {
        square(4);
    }

    else {
        printf("Errore\n");
        exit(1);
    }
}