#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int num_ins=0, conta_ins=0, somma=0;
	cout << "Inserisci un numero (zero per terminare)" << endl;
	do{
		cin >> num_ins;
		somma += num_ins;
		conta_ins++;
	}while (num_ins != 0);
	cout << "Somma totale dei valori inseriti = " << somma << endl << "Quantita' di valori inseriti = " << conta_ins-1 << endl;
	getchar();
	
	return 0;
}
