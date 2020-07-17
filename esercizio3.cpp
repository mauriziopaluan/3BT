#include <iostream>
using namespace std;

#define SIZEVETT 5		// definisce la grandezza del vettore ovvero quanti numeri deve immettere l'utente, puoi variarlo a tua scelta


// La funzione che segue accetta un vettore di interi come parametro e restituisce la differenza tra il valore massimo ed il valore minimo presente nel vettore
int calcolaDiffMaxMinVett(int v[SIZEVETT]){
	
	int Vmin, Vmax, y; 					// creo tre variabili che serviranno per l'elaborazione
	Vmin = Vmax = v[0]; 				// assegno il primo input utente ad entrambe le variabili min e max
	for(y=0;y < SIZEVETT; y++) {
		if (v[y] > Vmax) 				// se il valore letto e' piu' alto del primo valore inserito lo salvo in Vmax
			Vmax = v[y];
		if (v[y] < Vmin)				// se il valore letto e' piu' basso del primo valore inserito lo salvo in Vmin
			Vmin = v[y];
	}
	
	return Vmax-Vmin;					// restituisco la differenza tra il valore piu' alto e quello piu' basso

}


int main(void) {
	int i;	//variabile utilizzata per ciclo for
	int vett_input[SIZEVETT]; // Vettore utilizzato per memorizzare gli input utente
	
	cout << "Inserisci " << SIZEVETT << " numeri premendo invio ad ogni numero:" << endl; // richiesta all'utente di inserire n input (definibili in SIZEVETT)
	for(i=0;i<SIZEVETT;i++){
		cin >> vett_input[i];
	}	

// Togliendo i commenti in questa sezione vengono visulizzati nuovamente i valori letti e salvati nell'array
//	cout << "I numeri che hai inserito sono:" << endl;
//	for(i=0;i<SIZEVETT;i++){
//		cout << vett_input[i] << endl;
//	}	

// richiamo la funzione calcolaDiffMaxMinVett passando come parametro vett_input che contiene i valori inseriti dall'utente
// e visualizzo il valore di ritorno della funzione che e' la differenza tra massimo e minimo inseriti
	cout << "La differenza tra il valore massimo ed il valore minimo immesso e': " << calcolaDiffMaxMinVett(vett_input) <<endl;
	
	return 0;
}
