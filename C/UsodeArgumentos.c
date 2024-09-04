#include <stdio.h>        // Argumentos
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int mes;
    char *nomemes[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro",
    "Novembro", "Dezembro"};

    if(argc == 4){
        mes = atoi(argv[2]);
        mes<1 || mes>12 ? printf("Erro, mes invalido"): printf("\n%s de %s de 20%s \n", argv[1], nomemes[mes -1], argv[3]);
    }
    else
        printf("Erro! Use dia, mes e ano com numeros inteiros.");
}
