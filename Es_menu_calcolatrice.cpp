#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int val0=0, val1=0, risultato=0; 
	char scelta;

	cout << "Inserire due valori interi:" << endl;
	cin >> val0 >> val1;
	cout << "Premere 'a' per effettuare la somma dei numeri" << endl;
	cout << "Premere 'b' per effettuare la differenza dei numeri" << endl;
	cout << "Premere 'c' per effettuare la moltiplicazione dei numeri" << endl;
	cout << "Premere 'd' per effettuare la divisione dei numeri" << endl;
	cin >> scelta;
	
	switch(scelta){
		case 'a':
			risultato=val0+val1;
			break;
		case 'b':
			risultato=val0-val1;
			break;
		case 'c':
			risultato=val0*val1;
			break;
		case 'd':
			risultato=val0/val1;
			break;
		default:
			cout << "Opzione non prevista!" << endl;
			risultato=0;
			break;
		}	

	cout << "Il risultato e': " << risultato << endl;
		
	getchar();
	return 0;
}


