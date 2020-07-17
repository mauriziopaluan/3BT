#include <iostream>
#include <cstdlib> // inclusione necessaria per l'utilizzo della funzione atoi per conversione da stringa a intero
using namespace std;

#define PUNTI 30
#define MAX_STR 20

// da un punto di vista logico, squadra e allenatore sono due entita' distinte, motivo per cui e' possibile definirle in due struct
// e squadra utilizza il tipo Persona per definire la variabile Allenatore.
// l'unica accortezza per evitare errori di compilazione e' definire prima Persona e poi Squadra (che fa uso di Persona)
struct Persona{
	string Nome;
	string Cognome;
	string TitoliVinti;
	};

struct Squadra{
	string Nome;
	string ColMaglia;
	string Punteggio;
	Persona Allenatore;
	};


int main(int argc, char** argv) {
	
	const int MAX = 2; // <----- mettere a 10 nella versione definitiva, 2 per il debug per evitare di inserire ad ogni prova 10 squadre
	Squadra Fantacalcio[MAX];
	int cnt=0;
	
	cout << "Inserimento dati Squadre:" << endl;
	
	for(int i=0; i<MAX; i++){

		cout << "Dati Squadra n. " << i+1 << endl;
		cout << "Nome: ";
		getline(cin, Fantacalcio[i].Nome);
		cout << "Colore maglia: ";
		getline(cin, Fantacalcio[i].ColMaglia);
		cout << "Punteggio corrente: ";
		getline(cin, Fantacalcio[i].Punteggio);
		cout << "Nome Allenatore: ";
		getline(cin, Fantacalcio[i].Allenatore.Nome);
		cout << "Cognome Allenatore: ";
		getline(cin, Fantacalcio[i].Allenatore.Cognome);
		cout << "Titoli vinti Allenatore: ";
		getline(cin, Fantacalcio[i].Allenatore.TitoliVinti);
	}


	cout << "Ecco i cognomi degli allenatori delle squadre che hanno piu' di " << PUNTI << " punti in classifica:" << endl;
	for(int i=0; i<MAX; i++){
		if(atoi(Fantacalcio[i].Punteggio.c_str()) > PUNTI){  // la stringa viene prima convertita in stile c poi convertita in intero con atoi
			cout << Fantacalcio[i].Allenatore.Cognome << endl;
			cnt++;
		}
	}
	if(cnt==0)
		cout << "Non sono state trovate squadre con piu' di " << PUNTI << " in classifica." << endl;


	cnt=0; // azzero di nuovo il contatore per riutilizzarlo nel for successivo
	for(int i=0; i<MAX; i++){
		if(atoi(Fantacalcio[i].Allenatore.TitoliVinti.c_str()) >= 1)  // la stringa viene prima convertita in stile c poi convertita in intero con atoi
			cnt++;
	}
	if(cnt==0)
		cout << "Non sono stati trovati allenatori con piu' di " << PUNTI << " titoli vinti." << endl;
	
	else
		cout << "Gli allenatori con almeno un titolo vinto sono: " << cnt << endl;

	system("pause");
	return 0;
}

