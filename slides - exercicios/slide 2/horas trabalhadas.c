// Escreva um programa que calcule o sal�rio semanal de um trabalhador. As entradas
// s�o o n�mero de horas trabalhadas na semana e o valor da hora. At� 40 h/semana n�o se
// acrescenta nenhum adicional. Acima de 40h e at� 60h h� um b�nus de 50% para essas
// horas. Acima de 60h h� um b�nus de 100% para essas horas.

#include <stdio.h>

void salario_semanal(int horas, float valor_hora);

int main (void) {
    
    int horas_trabalhadas;
    float valor_hora;
    
    printf("Informe as horas trabalhadas na semana: ");
    scanf("%d", &horas_trabalhadas);
    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    
    salario_semanal(horas_trabalhadas, valor_hora);
    
     return 0;
}

void salario_semanal(int horas, float valor_hora) {
    
    float valor_total = 0;
    
    if (horas <= 40) {
        valor_total = (valor_hora * horas);
    }
    else if ((horas > 40) && (horas <= 60)) {
        valor_total = ((horas * valor_hora) + (horas * 0.5));
    }
    else {
        valor_total = ((horas * valor_hora) * 2);
    }
    
    printf("R$ %.2f", valor_total);
    
}
