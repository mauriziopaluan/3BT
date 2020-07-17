#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_INPUT	10 // Quantita' di valori inseriti

int main(int argc, char** argv) {

	int num=0, a=0, b=0, cnt_prd_ok=0;
	cout << "Inserisci un numero a piacere: " << endl;
	cin >> num;
	cout << "Inserisci " << N_INPUT << " coppie di valori:" << endl;
	
	for(int i=0; i < N_INPUT;i++){
		cin >> a >> b;
		if((a*b)== num){
			cnt_prd_ok++;
		}
	}
	cout << "Sono state inserite " << cnt_prd_ok << " coppie di valori che hanno per prodotto " << num<< endl;
	getchar();
	return 0;
}

