#include <iostream>
using namespace std;

#define SIZEVETT 5		// definisce la grandezza del vettore ovvero quanti numeri deve immettere l'utente, puoi variarlo a tua scelta


// La funzione che segue accetta un vettore di interi come parametro e restituisce lo stesso vettore con i numeri invertiti di posizione
// es: 1,2,3,4,5 -> 5,4,3,2,1
// SPIEGAZIONE DELLA FUNZIONE:
// il vettore vett_input viene passato come riferimento alla funzione quindi ogni operazione su tale vettore modifica il vettore stesso.
// Per invertire i valori presenti nel vettore scambio il primo valore con l'ultimo, il secondo con il penultimo, il terzo con il terzultimo
// e cosi' via, ma per fare lo scambio salvo prima in tmp il valore originale del primo valore, poi copio l'ultimo nel primo e infine copio 
// il valore salvato in tmp del primo nell'ultimo. stesso dicasi per il secondo con il penultimo, il terzo con il terzultimo e cosi' via
// notare che la durata del ciclo for vale esattamente la meta' della lunghezza dell'array (motivo per cui vedi la condizione "y < SIZEVETT/2"
// y e' un intero quindi se l'array fosse di 4 elementi SIZEVETT/2 varrebbe 2, lo stesso dicasi se fosse di 5 elementi come nell'esempio
// poiche' 5/2 verrebbe salvato come la sola parte intera senza decimale quindi sempre 2.
// prova con qualsiasi valore di SIZEVETT e vedrai che funziona sempre.
// infine dove vedi "SIZEVETT-1-y" significa "la dimensione del vettore -1" in quanto i vettori partono da 0 e diminuito del valore di y 
// che varia di ciclo in ciclo e quindi equivale a ultimo elemento del vettore al primo loop, penultimo al secondo, terzultimo al terzo
// e cosi' via.
void inverteVett(int v[SIZEVETT]){
	
	int tmp, y; 						// creo le variabili che serviranno per l'elaborazione
	for(y=0;y < SIZEVETT/2; y++) {		// due variabili e un ciclo for... se riesci a fare di meglio fai pure ;-)
		tmp = v[y];
		v[y] = v[SIZEVETT-1-y];
		v[SIZEVETT-1-y] = tmp;
	}
	return;								// restituisco void in quanto il vettore e' modificato per riferimento

}


int main(void) {
	int i;	//variabile utilizzata per ciclo for
	int vett_input[SIZEVETT]; // Vettore utilizzato per memorizzare gli input utente
	
	cout << "Inserisci " << SIZEVETT << " numeri premendo invio ad ogni numero:" << endl; // richiesta all'utente di inserire n input (definibili in SIZEVETT)
	for(i=0;i<SIZEVETT;i++){
		cin >> vett_input[i];
	}	


	cout << "I numeri che hai inserito sono:" << endl;
	for(i=0;i<SIZEVETT;i++){
		cout << "Posizione: " << i+1 << " -> " << vett_input[i] << endl;
	}	
	cout << endl;

// richiamo la funzione inverteVett passando come parametro vett_input che contiene i valori inseriti dall'utente
	inverteVett(vett_input);
	
	cout << "Il vettore invertito e': " << endl;
	for(i=0;i<SIZEVETT;i++){
		cout << "Posizione: " << i+1 << " -> " << vett_input[i] << endl;
	}	
	cout << endl;
	
	return 0;
}

