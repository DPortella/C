#include <stdio.h>
#include <stdlib.h>

int main(){
int a, inv = 0, manter;

scanf("%d", &a);

for(; a> 0;){
    manter = a % 10;
    inv = inv*10+manter;
    a /= 10;
}
    printf("%d", inv);
    return 0;
}
