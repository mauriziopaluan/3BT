#include <iostream>
using namespace std;

#define SIZEVETT 5		// definisce la grandezza del vettore ovvero quanti numeri deve immettere l'utente, puoi variarlo a tua scelta
#define VALMIN	3		// definisce il valore minimo
#define VALMAX	13		// definisce il valore massimo


// La funzione che segue accetta due vettore di interi, un valore minimo e uno massimo come parametri e
// copia nel vettore v_out[] i soli numeri che soddisfano i criteri > v_min e < di v_max
// SPIEGAZIONE DELLA FUNZIONE:
// un ciclo for scandisce tutti gli elementi del vettore in input e salva solo quelli utili nel vettore in output, ad ogni 
// valore trovato e salvato viene incrementato il contatore num_elementi che alla fine viene restituito al main

int sel_dati_Vett(int v_in[SIZEVETT], int v_out[SIZEVETT], int v_min, int v_max){
	
	int num_elementi = 0;				// dichiaro e inizializzo a 0 la variabile che conterra' la quantita' di numeri che soddisfano i criteri
	int y; 								// dichiaro la variabile che servira' per il ciclo for
	for(y=0;y < SIZEVETT; y++) {		
		if((v_in[y] > v_min) && (v_in[y] < v_max)){
			v_out[num_elementi] = v_in[y];
			num_elementi++;				// verifico che il numero sia compreso nel range e se la condizione e' vera lo salvo in v_out e incremento contatore
		}
	}
	return num_elementi;				// restituisco il numero di elementi che soddisfano i criteri

}


int main(void) {
	int i;						//variabile utilizzata per ciclo for
	int vett_input[SIZEVETT]; 	// Vettore utilizzato per memorizzare gli input utente
	int vett_output[SIZEVETT]; 	// Vettore utilizzato per salvare e memorizzare i dati che soddisfano i criteri
	
// Chiede all'utente di inserire i numeri	
	cout << "Inserisci " << SIZEVETT << " numeri premendo invio ad ogni numero:" << endl; // richiesta all'utente di inserire n input (definibili in SIZEVETT)
	for(i=0;i<SIZEVETT;i++){
		cin >> vett_input[i];
	}	

// visualizza i numeri inseriti
	cout << "I numeri che hai inserito sono:" << endl;
	for(i=0;i<SIZEVETT;i++){
		cout << "Posizione: " << i+1 << " -> " << vett_input[i] << endl;
	}	
	cout << endl;
// visualizza la quantita' di numeri trovati	
	cout << "Il vettore contiene " << sel_dati_Vett(vett_input, vett_output, VALMIN, VALMAX) <<"  valori che soddisfano i criteri" << endl;

// elenca i numeri trovati (questa sezione puoi anche rimuoverla in quanto non richiesta nell'esercizio
	for(i=0; i < sel_dati_Vett(vett_input, vett_output, VALMIN, VALMAX); i++){
		cout << "Posizione nel vettore di output: " << i+1 << " -> " << vett_output[i] << endl;
	}	
	cout << endl;
	
	return 0;
}

