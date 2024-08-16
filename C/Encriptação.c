#include <stdio.h>      //Encriptação por inversão de bits
#define MAX 50
char encode(char *str);

int main(void)
    {
    char s[MAX];
    printf("Digite sua mensagem:\n");
    fgets(s, MAX, stdin);
    encode(s);
    }

char encode(char *str){
    while(*str){
        printf("%c", ~*str);
        str++;
    }
}
