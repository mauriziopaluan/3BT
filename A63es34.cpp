#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 10	 //quantita' di valori letti da console

int main(int argc, char** argv) {

	int k=0, cnt_magg=0, cnt_min=0, cnt_uguale=0, valore=0;
	cout << "Inserisci un numero intero di riferimento: ";
	cin >> k;
	cout << "Inserisci " << N << " numeri interi a tuo piacere:" << endl;
	for(int i = 0; i < N; i++){
		cin >> valore;
		if(valore > k)
			cnt_magg++;
		else if(valore < k)
			cnt_min++;
		else cnt_uguale++;
		
	}
	cout << "Sono stati inseriti:" << endl;
	cout << cnt_magg << " valori maggiori di " << k << endl;
	cout << cnt_uguale << " valori uguali di " << k << endl;
	cout << cnt_min << " valori minori di " << k << endl;
	getchar();
	return 0;
}
