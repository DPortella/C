#include <stdio.h>      //Decriptador da Cifra de Cesar
#include <ctype.h>
#define MAX 50
int main(void){
    char s[MAX];
    int key;

    printf("Digite uma frase:\n");
    fgets(s, sizeof(s), stdin);
    printf("Digite o valor da chave:\n");
    scanf("%d", &key);
    printf("Mensagem decriptada: ");

    for(int i = 0 ; s[i] != '\0'; i++){
        char letra = s[i];
        if (isalnum(letra)) {
            if (islower(letra)) {
                letra = (letra - 'a' - key + 26) % 26 + 'a';
            }
            if (isupper(letra)) {
                letra = (letra - 'A' - key + 26) % 26 + 'A';
            }
            if (isdigit(letra)) {
                letra = (letra - '0' - key + 26) % 10 + '0';
            }
        }
        else{
            continue;
        }
        printf("%c", letra);
        }
}
