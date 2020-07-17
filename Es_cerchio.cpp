#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n=0, area=0, cnt=0; 

	cout << "Quante aree del cerchio vuoi calcolare?" << endl;
	cin >> n;
	int vett[n];
	cout << "Inserisci " << n <<" valori interi di raggi in cm:" << endl;
	for(int i=0; i <n; i++){
		cin >> vett[i];
		if(vett[i] <= 0){
			cout << "Raggio non valido, inserire solo valori interi maggiori di 0" << endl;
		}
		else{
			area=3.14*vett[i]*vett[i];
			cout << "L'area del cerchio con raggio " << vett[i] << " e': " << area << endl;
			cnt++;
		}
	}
	
	cout << "L'area del cerchio e' stata calcolata " << cnt << " volte." << endl;

	getchar();
	return 0;
}

