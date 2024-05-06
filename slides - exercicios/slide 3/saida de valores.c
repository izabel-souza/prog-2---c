#include <stdio.h>

int main(void) {
	
	int i = 5;
	int *p;
	p = &i;
	printf("%x %d %d \n", p, *p+2, 3**p);
	
	return 0;
}

