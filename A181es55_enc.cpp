#include <stdio.h>
#include <ctype.h>


#define MAX_STR 80
int EncMsg(char str[]);

int main(int argc, char** argv) {
	char stringa[MAX_STR];
	
	printf("Inserisci il messaggio da cifrare\n");
//	gets(stringa);
	fgets(stringa, MAX_STR-1,stdin);
	for(int i=0; i < MAX_STR; i++){
		if(stringa[i] == '\n'){
			stringa[i] = '\0';
			break;
		}
	}

	EncMsg(stringa);
			
	printf("Ecco il messaggio cifrato:\n%s", stringa);
	getchar();
	return 0;
}

int EncMsg(char str[]){
	int i = 0;
	
	while(str[i]!='\0'){
		if(isalpha(str[i])){
			switch(str[i]){
				case 'z':
					str[i] = 'a';
					break;
				case 'Z':
					str[i] = 'A';
					break;
			default:
				str[i]+=1;
				break;				
			}
		}
		i++;	
	}
			return 0;
}


