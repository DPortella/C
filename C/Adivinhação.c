#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
int num;
int adv;
srand(time(NULL));

adv = rand();

while(adv != num){

printf("Adivinhe o numero:\n");
scanf("%d", &num);

if(num != adv){
    if(num <= adv)
        printf("Errou! Tente um numero maior\n\n");
    else
        printf("Errou! Tente um numero menor\n\n");
}
else printf("***CERTO!***");
}
}
