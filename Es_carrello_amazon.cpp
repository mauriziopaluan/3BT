#include <iostream>
using namespace std;
#define INS 1000
#define MAX_SPESA 300

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float prezzo[INS], tot=0, piu_caro=0;
	int item=0, piu_caro_item=0;
	char conferma;

	while(tot <= MAX_SPESA){
		cout << "Inserisci il prezzo di un articolo:" << endl;
		cin >> prezzo[item];
		if(prezzo[item] > piu_caro){
			piu_caro=prezzo[item];
			piu_caro_item = item;
		}
		tot+=prezzo[item];
		cout << "Totale spesa: " << tot << " l'articolo piu' costoso e' il num: " << piu_caro_item+1 
			<< 	" e costa : " << piu_caro << " euro." << endl << "Ci sono " << item+1 
			<< " articoli nel carrello" << endl;
		item++;
	}
	cout << "VAI AL CARRELLO:" << endl;
	for(int i= 0; i < item; i++){
		if(prezzo[i] < 0){
			cout << "L'articolo num." << i+1 << " ha un valore non valido (" << prezzo[i] << " euro). Inserire un prezzo valido:" <<endl;
			while(prezzo[i] <= 0){
				cin >> prezzo[i];
				if(prezzo[i] <= 0 )
					cout << "Riprova, prezzo non valido!" << endl;
			}
		}
	}

	cout << "Procedere con l'acquisto? Premere s/S per confermare: ";
	cin >> conferma;
	switch (conferma){
		case 's':
		case 'S':
			cout << "ORDINE EFFETTUATO" << endl;
			break;
		default:
			cout << "ORDINE ANNULLATO" << endl;
			break;
	}
	

	getchar();
	return 0;
}



