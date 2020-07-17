#include <stdio.h>
#include <ctype.h>

#define MAX_STR 80
void InverteUpLow(char str[]);

int main(int argc, char** argv) {
	char stringa[MAX_STR];
	printf("Inserisci una frase a piacere\n");
	gets(stringa);
	InverteUpLow(stringa);
	printf("%s\n", stringa);
	getchar();
	return 0;
}

void InverteUpLow(char str[]){
	int i = 0;
	while(str[i]){
	if(islower(str[i]))
		str[i] = toupper(str[i]);
	else
		str[i] = tolower(str[i]);
	i++;	
	}
	return;	
}

