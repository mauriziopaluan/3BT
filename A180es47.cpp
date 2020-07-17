#include <stdio.h>
#include <ctype.h>

#define MAX_STR 80
int ContaVocCons(char str[], int vc);

int main(int argc, char** argv) {
	char stringa[MAX_STR];
	int scelta='x';
	
	printf("Inserisci una frase a piacere\n");
	gets(stringa);
	printf("Premi C per contare le consonanti oppure V per le vocali\n");
	while((scelta = getchar()) != EOF){
		if(scelta == 'C' || scelta == 'V')
				break;
	}
			
	printf("Ho trovato %d occorrenze.\n", ContaVocCons(stringa,scelta));
	getchar();
	return 0;
}

int ContaVocCons(char str[], int vc){
	int vcnt=0, ccnt=0;
	int i = 0;
	
	while(str[i]!='\0'){
		if(isalpha(str[i])){
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
					vcnt++;
					break;
			default:
				ccnt++;
				break;				
			}
		}
		i++;	
	}
	switch(vc){
		case 'C':
			return ccnt;
			break;
		case 'V':
			return vcnt;
			break;
		default:
			return 0;
	}
}

