#include <iostream>
using namespace std;
#define INS 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vett[INS], cnt=0; 

	cout << "Inserisci " << INS << " valori numerici interi:" << endl;
	for(int i=0; i < INS; i++){
		cin >> vett[i];
		if(vett[i] < 0){
			cout << "Il numero inserito e' negativo" << endl;
			cnt++;
		}
		if(vett[i]%2 == 0)
			cout << "Il numero inserito e' pari" << endl;
		else
			cout << "Il numero inserito e' dispari" << endl;
	}
	cout << "Sono stati inseriti " << cnt << " numeri negativi." << endl;

	getchar();
	return 0;
}


