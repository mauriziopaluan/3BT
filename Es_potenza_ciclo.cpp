#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	unsigned int base=0, esp=0, risultato=0; 

	cout << "Inserire due valori interi:" << endl;
	cin >> base >> esp;
	if(esp <0){
		risultato = 0;
		cout << "Esponente non valido" << endl;
	}
	if(esp > 0){
		risultato=base;
		for(int i=1; i < esp; i++)
				risultato = risultato*base;
	}
	if(esp == 0)
		risultato = 1;
	
	cout << "Il risultato e': " << risultato << endl;
		
	getchar();
	return 0;
}



