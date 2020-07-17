#include <iostream>
#include <iomanip> //serve per setw() per rendere piu' leggibile l'elenco libri
using namespace std;

#define NUM_LIBRI 100

// definizione struttura dati
struct Libro{
	string Codice;
	string Titolo;
	string Autore;
	string AnnoPubb;
	string Editore;
	};

// definizione funzioni
int InserisciLibro(Libro LaCollezione[]);
int VisualizzaCollezione(Libro LaCollezione[]);
int VisualizzaLibroDaCodice(Libro LaCollezione[], string codice);
int VisualizzaLibroDaTitolo(Libro LaCollezione[], string titolo);


int main(int argc, char** argv) {
	string scelta = "";
	string Title = "";
	string Code = "";

// creazione struttura ed assegnazione campi	
	Libro Collezione[NUM_LIBRI] = {
		{ "191001", "Le avventure di Pinocchio", "Carlo Collodi", "1883", "Mondadori" },
		{ "191002", "Le tigri di Mompracem", "Emilio Salgari", "1900", "Feltrinelli" },		
		{ "191003", "Viaggio al centro della Terra", "Jules Verne", "1864", "Giunti Junior" },		
		{ "191004", "Il giornalino di Gian Burrasca", "Luigi Vamba Bertelli", "1912", "Giunti" },		
		{ "191005", "Zanna Bianca", "Jack London", "1906", "Mondadori" }
	};
	
	while(scelta != "q"){
		if(scelta == "1"){
			if(InserisciLibro(Collezione) == 1)
				cout << "Non e' stato possibile inserire un libro nella collezione!" << endl;
		}
		if(scelta == "2"){
			if(VisualizzaCollezione(Collezione) == 1)
				cout << "Non sono presenti libri nella collezione!" << endl;
		}
		if(scelta == "3"){
			cout << "Inserisci un codice: "; getline(cin, Code);
			if(VisualizzaLibroDaCodice(Collezione, Code) == 1)
				cout << "Non e' stato trovato alcun libro nella Collezione con il codice cercato" << endl;
		}
		if(scelta == "4"){
			cout << "Inserisci un titolo: "; getline(cin, Title);
			if(VisualizzaLibroDaTitolo(Collezione, Title) == 1)
				cout << "Non e' stato trovato alcun libro nella Collezione con il titolo cercato" << endl;
		}			
	cout << endl << "Menu':"<< endl << "1 Inserisci libro | 2 Visualizza elenco collezione | 3 Visualizza libro da codice | 4 Visualizza libro da titolo" 
		<<endl << "(q per terminare)" << endl;
	getline(cin, scelta);
	}
		
	system("pause");
	return 0;
}

int InserisciLibro(Libro LaCollezione[]){
	int cnt=0;
	string s;

	cout << "Inserisci codice: ";getline(cin,s);
	while(LaCollezione[cnt].Codice != "" && LaCollezione[cnt].Codice != s && cnt < NUM_LIBRI-1){
		cnt++;
	}
	if(cnt >= NUM_LIBRI-1){
		return 1;
	}
	else{
	LaCollezione[cnt].Codice = s;
	cout << "Inserisci Titolo: ";getline(cin,s);
	LaCollezione[cnt].Titolo = s;
	cout << "Inserisci Autore: ";getline(cin,s);
	LaCollezione[cnt].Autore = s;
	cout << "Inserisci Anno di pubblicazione: ";getline(cin,s);
	LaCollezione[cnt].AnnoPubb = s;
	cout << "Inserisci Editore: ";getline(cin,s);
	LaCollezione[cnt].Editore = s;
	cout << "Libro inserito!" << endl;
	}
	
	return 0;
}

int VisualizzaCollezione(Libro LaCollezione[]){
	int cnt=0;
	if(LaCollezione[0].Codice == "")
		return 1;
	cout << "Libri inseriti nella Collezione:" << endl;
	cout << left << setw(6) << "Codice" << " " << left << setw(30) << "Titolo" << " "<< left << setw(20)  << "Autore" << " " << left << setw(10) << "Anno Pubb." << " " << left << setw(20) << "Editore" << endl;
	while(LaCollezione[cnt].Codice != ""){
		cout << left << setw(6) << LaCollezione[cnt].Codice << " " << left << setw(30) << LaCollezione[cnt].Titolo << " " << left << setw(20)  << LaCollezione[cnt].Autore << " "<< left << setw(10) << LaCollezione[cnt].AnnoPubb << " " << left << setw(20) << LaCollezione[cnt].Editore << endl;
		cnt++;
	}
	
	return 0;
}

int VisualizzaLibroDaCodice(Libro LaCollezione[], string codice){

	int cnt=0;
	while(LaCollezione[cnt].Codice != codice && cnt < NUM_LIBRI-1)
		cnt++;
	if(cnt >= NUM_LIBRI-1){
		return 1;
	}
	else{
	cout << "E' stato trovato il seguente Codice nella Collezione:" << endl;
	cout << left << setw(6) << "Codice" << " " << left << setw(30) << "Titolo" << " "<< left << setw(20)  << "Autore" << " " << left << setw(10) << "Anno Pubb." << " " << left << setw(20) << "Editore" << endl;
		cout << left << setw(6) << LaCollezione[cnt].Codice << " " << left << setw(30) << LaCollezione[cnt].Titolo << " "<< left << setw(20)  << LaCollezione[cnt].Autore << " "<< left << setw(10) << LaCollezione[cnt].AnnoPubb << " " << left << setw(20) << LaCollezione[cnt].Editore << endl;
	}	
	
	return 0;
}


int VisualizzaLibroDaTitolo(Libro LaCollezione[], string titolo){

	int cnt=0;
	while((LaCollezione[cnt].Titolo.find(titolo)) == -1  && cnt < NUM_LIBRI-1){  // -1 corrisponde a std::string::npos cioe' stringa non trovata
		cnt++;
	}

	if(cnt >= NUM_LIBRI-1){
		return 1;
	}
	else{
	cout << "E' stato trovato il seguente Titolo nella Collezione:" << endl;
	cout << left << setw(6) << "Codice" << " " << left << setw(30) << "Titolo" << " "<< left << setw(20)  << "Autore" << " " << left << setw(10) << "Anno Pubb." << " " << left << setw(20) << "Editore" << endl;
		cout << left << setw(6) << LaCollezione[cnt].Codice << " " << left << setw(30) << LaCollezione[cnt].Titolo << " "<< left << setw(20)  << LaCollezione[cnt].Autore << " "<< left << setw(10) << LaCollezione[cnt].AnnoPubb << " " << left << setw(20) << LaCollezione[cnt].Editore << endl;
	}	
	
	return 0;
}

