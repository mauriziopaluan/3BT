#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define MAX_STR 10 // mettere a 3 come richiesto dall'esercizio, 10 e' per le prove

int ConfStr(string str1, string str2);
void OrdinaStr(string str[], int qta);

int main(int argc, char** argv) {

	string s[MAX_STR];
	
	while(1){ // loop infinito per le prove, eliminare <-----------
		cout << "Inserisci " << MAX_STR << " stringhe: " << endl;
		for(int i=0; i< MAX_STR; i++){
			cout << "Stringa " << i+1 <<": "; getline(cin, s[i]);
			}
	
		OrdinaStr(s, MAX_STR);
		for(int i=0; i< MAX_STR; i++){
			cout << s[i] << " ";
		}
		cout << endl;
	} // chiusura del loop infinito per le prove, eliminare <----------- 
	
	system("pause");
	return 0;
}

int ConfStr(string str1, string str2){
	if(str1 > str2)
		return -1;
	if(str1 == str2)
		return 0;
	if(str1 < str2)
		return 1;
}

/*
Algoritmo di ordinamento per selezione
Il processo di ordinamento comincia dall’esame dell’intero array alla
ricerca della stringa più piccola, quella cioè che precede alfabeticamente
tutte le altre. Questa stringa viene scambiata con la prima stringa
dell’array: dunque la stringa più piccola diventa la prima dell’array.
Si passa quindi a considerare le restanti n-1 stringhe alla ricerca della
più piccola, che sarà scambiata con la seconda stringa dell’array.
Poi si passa alle restanti n-2 stringhe, in cerca della più piccola, che
viene scambiata con la terza stringa dell’array, e così via finché l’array
non sarà ordinato.
Per trovare la stringa più piccola, ad ogni passaggio, si confronta
ciascuna delle stringhe non ancora ordinate con la prima stringa.
Se si trova una stringa più piccola della prima le due stringhe
vengono scambiate.
*/
void OrdinaStr(string str[], int qta){
	int i,j;
	string tmp;

	for (j=0; j < MAX_STR-1; ++j){
		for (i=j+1; i < MAX_STR; ++i){
			if (ConfStr(str[j], str[i])<0){
				// scambia due stringhe
				tmp = str[j];
				str[j] = str[i];
				str[i] = tmp;
			}
		}
	}
	return;
}

