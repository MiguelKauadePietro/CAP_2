#include <stdio.h>
#include <string.h>
#include <ctype.h>

int conta_palavra(char *texto, char *palavra){
	int cont = 0;
	char *p = strstr(texto, palavra);

	for(cont = 0; p != NULL; cont++){
		p++;
		p = strstr(p, palavra);
	}

	return cont;
}

int main(void){

	char text[] = "EU SINTO OS TEUS SINAIS";
       	char p[] = "S";

	printf("%d\n", conta_palavra(text, p));

	return 0;
}	


		

