#include<stdio.h>
#include<string.h>

main(void) {
    
    char texto[]= "foi muito facil"; //uma cadeia de caracteres foi iniciada com a frase "foi muito facil"
    
    int i; //variavel inteira i
    
    for (i = 0; texto[i]!='\0'; i++) { //loop que vai percorrer toda a string
        if (texto[i] == ' ') 
            break; //assim que o loop se deparar com espa�o em branco, ele para de ser executado
        }
        i++; //pega o caractere que vem depois do espa�o em branco
        
        for ( ; texto[i]!='\0'; i++) { //o loop vai percorrer toda a string a partir do caractere ap�s o espa�o em branco ate o final
        
            printf("%c", texto[i]); // printa na tela toda a frase do caractere at� o final
        }
}
