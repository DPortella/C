#include <stdio.h>      //Cifra de Cesar
#include <ctype.h>
#define MAX 50

void main(void)
{
    char s[MAX];
    int key;
    printf("Digite uma frase:\n");
    fgets(s, sizeof(s), stdin);
    printf("Digite o valor da chave:\n");
    scanf("%d", &key);

    for(int i = 0 ; s[i] != '\0'; i++){
        char letra = s[i];
        if (isalnum(letra)) {

            if (islower(letra)) {
                letra = (letra - 'a' + key) % 26 + 'a';
            }
            if (isupper(letra)) {
                letra = (letra - 'A' + key) % 26 + 'A';
            }
            if (isdigit(letra)) {
                letra = (letra - '0' + key) % 10 + '0';
            }
            if(letra == ' '){
                printf("%c", letra);
            }
        }
        printf("%c", letra);
        }
}
