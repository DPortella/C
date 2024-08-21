#include <stdio.h>        //Tirar espaços de string recebida
#define MAX 50
void no_spaces(char *str);

void main(void)
{
    char s[MAX];
    printf("Digite uma frase:\n");
    fgets(s, MAX, stdin);
    no_spaces(s);
}

void no_spaces(char *str){
    for( ; *str != '\0'; str++){
        if(*str == ' '){
            continue;
        }
        printf("%c", *str);
    }
}
