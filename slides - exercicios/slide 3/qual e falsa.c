//int *pti;
//int veti[]={10,7,2,6,3};
//pti = veti;
//Qual afirmativa � falsa?
//a. *pti � igual a 10
//b. *(pti+2) � igual a 2
//c. pti[4] � igual a 3
//d. pti[1] � igual a 10
//e. *(veti+3) � igual a 6

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int *pti;
	int veti[]={10,7,2,6,3};
	pti = veti;
	
	printf("%d\n", pti);
	
	return 0;
}
