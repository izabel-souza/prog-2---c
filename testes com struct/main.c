// Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme solicitado abaixo:
// • Horario: composto de hora, minutos e segundos. 
// • Data: composto de dia, mes e ano. ˆ
// • Compromisso: composto de uma data, horario e texto que descreve o compromisso.

#include <stdio.h> <stdlib.h> <string.h>

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct hora {
    int hora, minutos, segundos;
} Hora;

typedef struct compromisso {
    Data data_compromisso;
    Hora horario_compromisso;
    char compromisso[80];
} Compromisso;

int main (void) {

    Compromisso oquefazer;
    printf("Informe o dia, mes e ano do compromisso: ");
    scanf("%d %d %d", &oquefazer.data_compromisso.dia, &oquefazer.data_compromisso.mes, &oquefazer.data_compromisso.ano);
    
    printf("Informe a hora, minuto e segundos: ");
    scanf("%d %d %d", &oquefazer.horario_compromisso.hora, &oquefazer.horario_compromisso.minutos, &oquefazer.horario_compromisso.segundos);
    
    printf("Informe o que fazer: ");
    scanf(" %79[^\n]%c", oquefazer.compromisso);

    printf("COMPROMISSO:\n HORA: %d %d %d\n DATA: %d %d %d\n O QUE FAZER: %s", oquefazer.horario_compromisso.hora, oquefazer.horario_compromisso.minutos, oquefazer.horario_compromisso.segundos, oquefazer.data_compromisso.dia, oquefazer.data_compromisso.mes, oquefazer.data_compromisso.ano, oquefazer.compromisso);

    return 0;
}