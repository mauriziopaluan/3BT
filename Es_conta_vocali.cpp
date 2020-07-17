#include <stdio.h>

#define MAX_STR 80
int ContaVocali(char str[]);

int main(int argc, char** argv) {
	char stringa[MAX_STR];
	printf("Inserisci una frase a piacere\n");
	gets(stringa);
	printf("Le vocali presenti nella frase sono: %d\n", ContaVocali(stringa));
	getchar();
	return 0;
}

int ContaVocali(char str[]){
	int cnt=0;
	int i = 0;
	while(str[i]!='\0'){
		switch(str[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				cnt++;
				break;
		default:
			break;				
		}
	i++;	
	}
	return cnt;	
}
