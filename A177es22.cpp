#include <iostream>
using namespace std;
#define MAX_NUM 5

void derive(float data[], int n, float difference[]);

int main(void) {

	int n;
	float v[MAX_NUM], d[MAX_NUM];  // variabile utilizzata per memorizzare gli input utente
	
	cout << "Inserisci " << MAX_NUM << " numeri:\n"; // richiesta all'utente di inserire n input 
	for(int i = 0; i < MAX_NUM; i++){
	cin >> n;
	v[i] = n; // Vettore utilizzato per memorizzare gli input utente
	}
	
	derive(v, MAX_NUM, d);
	
	for(int i=0; i < MAX_NUM; i++)
	cout << "Posizione vettore difference: " << i << " differenza: " << d[i] << "\n";

	getchar();	
	return 0;
}

void derive(float data[], int n, float difference[]){
	for(int i = 0; i < n-1; i++)
		difference[i] = data[i+1]-data[i];
	
	difference[n-1] = data[n-1]-data[n-1];
	
	return;
}


