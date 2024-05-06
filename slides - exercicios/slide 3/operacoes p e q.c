#include <stdio.h>

void calc_operacoes(int i, int *p, int *q);

int main(void) {
	
	int i = 3, j = 5;
	int *p, *q;
	p = &i;
	q = &j;
	
	calc_operacoes(i, p, q);
	
	return 0;	
}

void calc_operacoes(int i, int *p, int *q) {
	printf("%d\n", (p == &i)); //0
	printf("%d\n", (*p - *q)); //-2
	printf("%d\n", (**&p)); //3
	printf("%d\n", (3* - *p / (*q) + 7)); //6
}
