#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_INPUT	10 // Quantita' di valori inseriti

int main(int argc, char** argv) {

	int cresc=0, ref, tmp=0;
	cout << "Inserisci " << N_INPUT << " numeri interi a piacere: " << endl;
	for(int i=0; i < N_INPUT;i++){
		cin >> tmp;
		if(i==0){
			ref=tmp;
			cresc++;
		}
		else{
			if(tmp>ref)
				cresc++;
			ref=tmp;
		}
	}

	if(cresc == N_INPUT) 
		cout << "I valori inseriti erano in ordine cresente" << endl;
	else
		cout << "I valori inseriti non erano in ordine cresente" << endl;
	getchar();
	return 0;
}



