#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {

	int n=0, k=0, tmp=0, a=0, ref, diff, prec;
	
	cout << "Quanti valori vuoi inserire?" << endl;
	cin >> n;
	cout << "Inserisci " << n << " valori in ordine crescente:" << endl;
	for(int i=0; i < n; i++){
		cin >> a;
		if(i==0)
			ref = a;
		if(i==1){
			diff = k = a - ref;
			prec = a;
		}
		if(i>1){
			if((a-prec) != k){
				tmp= -1;
				if((a-prec) > diff)
					diff = a-prec;
			}
		prec = a;
		}
	}
	cout << "Sono stati inseriti " << n << " valori." << endl;
	if(tmp == -1)
		cout << "La differenza tra i valori non e' stata costante e il suo massimo valore e' " << diff << endl;
	else
		cout << "La differenza tra i valori e' stata costante e il suo valore e' " << k << endl;
	
	getchar();
	return 0;
}



