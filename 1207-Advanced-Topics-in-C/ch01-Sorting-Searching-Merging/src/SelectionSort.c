
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for (int var = 0; var < 10; var++) 
		printf("%d, %d\n", var, rand()%20);
}
