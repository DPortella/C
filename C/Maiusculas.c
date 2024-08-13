#include <stdio.h>
#include <stdlib.h>

int main(){
    char string [30];
    scanf("%s", &string);

    printf("%s\n", string);
    printf("%s\n", strupr(string));

    return 0;
}
