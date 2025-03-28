#include <stdio.h>
#define MAXLINE 1000
int reverse(char line[], int maxline);

int reverse (char s[], int lim){
	int c, i=0, j;

	while (i < lim-1 && (c=getchar())!=EOF){  //&& c!='\n'; ++i para output de uma linha apenas
		s[i] = c;
		++i;
}
	s[i] = '\0';
	for (j = i-1; j>=0; j--)
		printf("%c", s[j]);
	printf("\n");
}

main(){

	int max, len;
	char line[MAXLINE];

	max=0;

	reverse(line, MAXLINE);
}
