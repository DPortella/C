#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main(void) {
    int t, i, j;
    int pos;
    char ch;

    printf("Digite Seu texto (ou pressione ESC para sair):\n");
     for (t = 1; t < MAX; t++){
        pos = 0;
        while (1) {
            ch = _getch();
            if (ch == 27) {
                printf("\nTecla ESC detectada. Saindo do programa.\n");
                break;
            }
            if (ch == '\r') {
                putchar('\n');
                break;
            }
            if (pos < LEN - 1) {
                text[t][pos++] = ch;
                putchar(ch);
            }
        }

        text[t][pos] = '\0';
        if (ch == 27) {
            break;
        }
    }

    for (i = 0; i < t; i++) {
        for (j = 0; text[i][j]; j++) {
            putchar(text[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
