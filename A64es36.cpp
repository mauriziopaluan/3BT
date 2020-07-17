#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define SUM_MAX	100 // somma massima dei valori inseriti

int main(int argc, char** argv) {

	int k=0, cnt_val=0, somma=0;
	do{
	cout << "Inserisci un numero intero a piacere: ";
	cin >> k;
	somma+=k;
	cnt_val++;
	}while(somma < SUM_MAX);
	cout << "La somma dei valori inseriti e'  " << somma << endl;
	cout << "Sono stati inseriti: " << cnt_val << " valori" << endl;
	getchar();
	return 0;
}

