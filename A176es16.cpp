#include <iostream>
using namespace std;
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

void CalcMinMaxMed(int v[], int elem, int* min, int* max, int* med);



int main(void) {

	int n;  // variabile utilizzata per definire grandezza vettore
	int minimo, massimo, media;
	
	cout << "Quanti numeri vuoi inserire nel vettore?" << endl; // richiesta all'utente di inserire n input 
	cin >> n;
	int vett_input[n]; // Vettore utilizzato per memorizzare gli input utente
	cout << "Inserisci " << n << " numeri (premi invio dopo ogni inserimento):" << endl; // richiesta all'utente di inserire n input
	
	for(int i=0;i<n;i++){
		cin >> vett_input[i];
	}	


	cout << "I numeri che hai inserito sono:" << endl;
	for(int i=0;i<n;i++){
		cout << "Posizione: " << i+1 << " -> " << vett_input[i] << endl;
	}	
	cout << endl;
	
	CalcMinMaxMed(vett_input, NELEMS(vett_input), &minimo, &massimo, &media);
	
	cout << "Il numero piu' piccolo e' " << minimo << " quello massimo e' " << massimo << " la media degli " << n << " valori e' " << media << endl;

	getchar();	
	return 0;
}

void CalcMinMaxMed(int v[], int elem, int* min, int* max, int* med){
	
	int tmp=0, piccolo=v[0], grande=v[0], medio=0;
	for(int i = 0; i < elem; i++){
		if(v[i] < piccolo)
			piccolo = v[i];
		if(v[i] > grande)
			grande = v[i];
	}
	for(int i = 0; i < elem; i++){
		tmp+=v[i];
	}
	
	*min = piccolo;
	*max = grande;
	*med = tmp/elem;
	
	return;
}


