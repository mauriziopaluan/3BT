#include <iostream>
using namespace std;

// #define COME_DA_LIBRO

#define MAX_NUM 12

int CalcEan13(int ean[MAX_NUM]);

int main(void) {

	int n;
	int v[MAX_NUM];  // variabile utilizzata per memorizzare gli input utente
	
	cout << "Inserisci i primi " << MAX_NUM << " numeri di un codice a barre:\n"; // richiesta all'utente di inserire n input 
	for(int i = 0; i < MAX_NUM; i++){
		cin >> n;
			if(n < 0 || n > 9){
				i--;
				continue;
			}
		v[i] = n; // Vettore utilizzato per memorizzare gli input utente
		}
	
	
	for(int i=0; i < MAX_NUM; i++)
	cout << "Posizione: " << i << " numero inserito: " << v[i] << "\n";
	cout << "Il numero finale e': " << CalcEan13(v) << endl;
	
	getchar();	
	return 0;
}

// I codici a barre dei prodotti sono composti da 13 cifre di cui l'ultima e la cifra di controllo che si determina 
// a partire dalle prime 12 (il codice vero e proprio) con le seguenti regole:
// - moltiplicare per 3 tutte le cifre in posizione "dispari" (la prima, la terza, fino all'undicesima);
// - moltiplicare per 1 tutte le cifre in posizione "pari" (la seconda, la quarta, fino alla dodicesima);
// - sommare i 12 valori cosi ottenuti;
//-  prendere il resto della divisione per 10 della somma ottenuta.
// Scrivere una funzione C++ che, a partire da un vettore di 12 numeri corrispondenti alle singole cifre di un 
// codice a barre, restituisca la cifra di controllo calcolata con le regole illustrate. Scrivere un programma C++ 
// che richieda all'utente l'inserimento delle singole cifre di un codice a barre e visualizzi la corrispondente cifra 
// di controllo calcolata con la funzione realizzata in precedenza.

// in realta' nei siti ufficiali pare che il calcolo venga fatto diversamente:
// vedere https://gs1it.org/assistenza/calcolo-cifra-di-controllo/
// Per effettuare manualmente il calcolo della cifra di controllo basta seguire i seguenti 3 passi:
// a) Leggendo il codice da destra verso sinistra, moltiplica per 1 le cifre che occupano le posizioni pari e per 3 le cifre
//    che occupano le posizioni dispari.
// b) Somma i valori dei prodotti ottenuti.
// c) Sottrai la somma ottenuta dal multiplo di 10 superiore, il risultato ottenuto è la cifra di controllo.

// motivo per cui approfittiamo per utilizzare le direttive preprocessore e fare due versione della funzione :-)
// a seconda della presenza o meno del define "COME_DA_LIBRO" compileremo l'una o l'altra versione della funzione.


#ifdef COME_DA_LIBRO

int CalcEan13(int ean[MAX_NUM]){
	int chk=0;
	
	for(int i = 0; i < MAX_NUM; i++){
		if(i%2)
			chk+=ean[i];
		else
			chk+=(ean[i]*3);
	}
	return chk%10; 		
}

#else

int CalcEan13(int ean[MAX_NUM]){
	int chk=0;
	
	for(int i = 0; i < MAX_NUM; i++){
		if(!(i%2))
			chk+=ean[i];
		else
			chk+=(ean[i]*3);
	}
	return 10-(chk%10);
}
#endif


