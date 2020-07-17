#include <iostream>
using namespace std;
#define MAX_NUM 10

bool TrovaValore(int num, int vett[MAX_NUM]);

int main(void) {

	int n, v[MAX_NUM];  // variabile utilizzata per memorizzare gli input utente
	
	cout << "Inserisci " << MAX_NUM << " numeri:\n"; // richiesta all'utente di inserire n input 
	for(int i = 0; i < MAX_NUM; i++){
	cin >> n;
	v[i] = n; // Vettore utilizzato per memorizzare gli input utente
	}

	for(;;){
	cout << "Inserisci un numero e ti diro' se e' presente o meno nel vettore (0 per terminare)\n";
	cin >> n;
	if(n == 0)
		break;
	if(TrovaValore(n,v))
		cout << "Vero\n";
	else
		cout << "Falso\n";
	}

	getchar();	
	return 0;
}

bool TrovaValore(int num, int vett[MAX_NUM]){
	
	for(int i = 0; i < MAX_NUM; i++){
		if(vett[i] == num)
		return true;
	}
	return false;
}

