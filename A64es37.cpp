#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_INPUT	10 // Quantita' di valori inseriti

int main(int argc, char** argv) {

	int h=0, k=0, cnt_val=0, tmp=0;
	cout << "Inserisci due numeri interi a piacere: ";
	cin >> h >> k;
	cout << "Inserisci " << N_INPUT << " numeri interi a piacere: " << endl;

	for(int i=0; i < N_INPUT;i++){
	cin >> tmp;
	if((tmp>=h) && (tmp<=k))
		cnt_val++;
	}
	cout << "La quantita dei valori inseriti compresi tra " << h << " e " << k << " e'  " << cnt_val << endl;
	getchar();
	return 0;
}


