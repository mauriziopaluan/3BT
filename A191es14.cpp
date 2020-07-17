#include <iostream>
using namespace std;

#define NUM_STUD 10

// definizione struttura dati
struct StudentiClasse{
	string Nominativo;
	string Sesso;
	int AnnoNascita;
	int VotoItaliano;
	int VotoInglese;
	int VotoMatematica;
	};

// definizione funzione richiesta
string piuFacile(StudentiClasse LaClasse[], int dimArray);



int main(int argc, char** argv) {

// creazione struttura ed assegnazione campi	
	StudentiClasse TerzaBT[NUM_STUD] = {
		{ "Giorgio Bianchi", "M", 2003, 5, 7, 9 },
		{ "Anita Rossi", "F", 2003, 4, 9, 6 },
		{ "Ambrogio Verdi", "M", 2003, 6, 6, 6 },
		{ "Tony Lasecchia", "M", 2003, 10, 10, 10 },
		{ "Alfredo Lapippa", "M", 2002, 4, 5, 4 },
		{ "Guido Lauto", "M", 2004, 7, 7, 9 },
		{ "Marino Sale", "M", 2003, 9, 9, 9 },
		{ "Filippa Gnocca", "F", 2003, 8, 9, 8 },
		{ "Carmen Spagnola", "F", 2003, 10, 9, 9 },
		{ "Vasco Rossi", "M", 2003, 6, 6, 6 }
	};

// solo per mettere a video la situazione, si puo' eliminare / commentare la sezione
	cout << "Dati inseriti nella struttura:" << endl;
	cout << "Nominativo\tSesso\tAnno\tIta\tIng\tMate" << endl;
	for(int i = 0; i < NUM_STUD; i++){
		cout << TerzaBT[i].Nominativo << "\t" << TerzaBT[i].Sesso << "\t" << TerzaBT[i].AnnoNascita << "\t" << TerzaBT[i].VotoItaliano << "\t"  << TerzaBT[i].VotoInglese << "\t" << TerzaBT[i].VotoMatematica << endl;
	}
// fine sezione
	
	cout << "La disciplina che ha la media di voti piu' alta e' " << piuFacile(TerzaBT, NUM_STUD) << endl;
	system("pause");
	return 0;
}

string piuFacile(StudentiClasse LaClasse[], int dimArray){

	int m_media=0;
	int tmp=0;
	string Materia = "---------";
	
	for(int i = 0; i<dimArray;i++)
		tmp += LaClasse[i].VotoItaliano;
	tmp /= dimArray;
	if(tmp> m_media){
		m_media = tmp;
		Materia = "Italiano";
		tmp = 0;
	}

	for(int i = 0; i<dimArray;i++)
		tmp += LaClasse[i].VotoInglese;
	tmp /= dimArray;
	if(tmp> m_media){
		m_media = tmp;
		Materia = "Inglese";
		tmp = 0;
	}
	

	for(int i = 0; i<dimArray;i++)
		tmp += LaClasse[i].VotoMatematica;
	tmp /= dimArray;
	if(tmp> m_media){
		m_media = tmp;
		Materia = "Matematica";
		tmp = 0;
	}

	return Materia;
}


