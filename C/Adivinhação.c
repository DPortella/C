#include <stdio.h>
#include <stdlib.h>

void main(void){
int num;
int adv;
srand(10);

adv = rand();

while(adv != num){

printf("Adivinhe o numero:\n");
scanf("%d", &num);

if(num != adv){
    num <= adv ? printf("Errou! Tente um numero maior\n\n"): printf("Errou! Tente um numero menor\n\n");
        }
else printf("***CERTO!***");
    }
}
