#include <stdio.h>
#include <stdlib.h>

int main(){
float nota, media, total;
int i;
char cod;
cod = 'X';
total = 0;

while(cod != 'N'){
    for(i = 1; i < 4; i++){
        printf("Digite a nota %d:", i);
        scanf("%f", &nota);
        total = total+nota;
}
media = total/4;
printf("A medida e de: %.2f\n", media);
total = 0;
nota = 0;

if(media >= 7){
    printf("Aluno Aprovado!!\n");
}
else if(media >= 5){
    printf("Aluno em recuperacao!!\n");
}
else printf("Aluno reprovado!\n");

printf("Deseja calcular mais uma media? 'S' ou 'N'\n");
cod = getche();
}
return 0;
}
