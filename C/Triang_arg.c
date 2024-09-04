#include <stdio.h>        // Triangulos
#include <stdlib.h>

int main(int argc, char *argv[]){
    float lado1, lado2, lado3;
    if(argc == 4){
        lado1 = atoi(argv[1]);
        lado2 = atoi(argv[2]);
        lado3 = atoi(argv[3]);
        if(lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado3 + lado2 < lado1)
            printf("Isso nao eh um triangulo");
        else
            if(lado1 == lado2 && lado1 == lado3)
                printf("Triangulo equilatero.");
            else
                if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
                    printf("Triangulo escaleno.");
                else
                    printf("Triangulo isosceles.");
    }
    else
        printf("Erro! Numero de argumentos incorreto, forneca os 3 lados do triangulo.");
}
