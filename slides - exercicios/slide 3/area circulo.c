#include <stdio.h>
#define PI 3.14159265F

void calc_circulo(float r, float *circunferencia, float *area);

int main(void) {
	
	float r, c, a;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	calc_circulo(r, &c, &a);
	
	printf("Circunferencia = %1.2f\n", c);
	printf("Area = %1.2f", a);
	
	return 0;
}

void calc_circulo(float r, float *circunferencia, float *area) {
	
	*circunferencia = (2 * r * PI);
	*area = (PI * (r*r));
	
}
