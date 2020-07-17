#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 10	 //quantita' di valori letti da console

int main(int argc, char** argv) {

	int k=0, cnt_mult=0, valore=0;
	do{
	cout << "Inserisci un numero intero di riferimento (maggiore di 0): ";
	cin >> k;
	}while(k==0);
	cout << "Inserisci " << N << " numeri interi a tuo piacere:" << endl;
	for(int i = 0; i < N; i++){
		cin >> valore;
		if(valore > k){
			if((valore%k)==0)
				cnt_mult++;
		}
		else{
			cout << "Devi inserire un valore maggiore di " << k << endl;
			i--;
		}
	}
	cout << "Sono stati inseriti:" << cnt_mult << " valori multipli di " << k << endl;
	getchar();
	return 0;
}
