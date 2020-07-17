#include <iostream>
using namespace std;

struct Auto{
	string Marca;
	string Cilindrata;
	string AnnoImm;
	string NomeAcq;
	string CognomeAcq;
	};

int main(int argc, char** argv) {
	
	const int MAX = 2; // mettere a 10, 2 e' usato solo per comodita' nel debug
	Auto Autosalone[MAX];
	int cnt=0;
	string anno;
	
	cout << "Inserimento dati Autosalone:\n";
	
	for(int i=0; i<MAX; i++){
		cout << "Dati Auto n. " << i+1 << endl;
		cout << "Marca: ";
		getline(cin, Autosalone[i].Marca);
		cout << "Cilindrata: ";
		getline(cin, Autosalone[i].Cilindrata);
		cout << "Anno immatricolazione: ";
		getline(cin, Autosalone[i].AnnoImm);
		cout << "Nome Acquirente: ";
		getline(cin, Autosalone[i].NomeAcq);
		cout << "Cognome Acquirente: ";
		getline(cin, Autosalone[i].CognomeAcq);
	}

	cout << "Ecco i cognomi degli acquirenti che hanno un'auto di cilindrata superiore a 1500:" << endl;
	
	for(int i=0; i<MAX; i++){
		if(Autosalone[i].Cilindrata > "1500" ){
			cout << Autosalone[i].CognomeAcq << endl;
			cnt++;
		}
	}
	
	if(cnt==0)
			cout << "Non sono state vendute auto di cilindrata superiore a 1500" << endl;

	cnt=0; // azzero di nuovo il contatore per riutilizzarlo nel for successivo

	cout << "Inserisci un anno per sapere quante auto vendute sono state immatricolate nell'anno scelto:" << endl;
	getline(cin, anno);

	for(int i=0; i<MAX; i++){
		if(Autosalone[i].AnnoImm == anno)
			cnt++;
	}
	
	cout << "Nell'anno " << anno << " sono state immatricolate n. " << cnt << " auto." << endl;

	system("pause");
	return 0;
}
