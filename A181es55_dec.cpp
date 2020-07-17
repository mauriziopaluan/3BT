#include <stdio.h>
#include <ctype.h>


#define MAX_STR 80
int DecMsg(char str[]);

int main(int argc, char** argv) {
	char stringa[MAX_STR];
	
	printf("Inserisci il messaggio da decifrare\n");
//	gets(stringa);
	fgets(stringa, MAX_STR-1,stdin);
	for(int i=0; i < MAX_STR; i++){
		if(stringa[i] == '\n'){
			stringa[i] = '\0';
			break;
		}
	}

	DecMsg(stringa);
			
	printf("Ecco il messaggio decifrato:\n%s", stringa);
	getchar();
	return 0;
}

int DecMsg(char str[]){
	int i = 0;
	
	while(str[i]!='\0'){
		if(isalpha(str[i])){
			switch(str[i]){
				case 'a':
					str[i] = 'z';
					break;
				case 'A':
					str[i] = 'Z';
					break;
			default:
				str[i]-=1;
				break;				
			}
		}
		i++;	
	}
			return 0;
}



