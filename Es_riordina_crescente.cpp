#include <iostream>
using namespace std;

void Riordina(float* num1, float* num2);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	float a, b;

	cout << "Inserisci due numeri reali:" << endl;
	cin >> a >> b;
	cout << "Primo numero: " << a << " secondo numero: "<< b << endl;
	cout << "Funzione riordina..." << endl;
	Riordina(&a,&b);
	cout << "Primo numero: " << a << " secondo numero: "<< b << endl;
	getchar();
	return 0;
}


void Riordina(float* num1, float* num2){
	float tmp;
	if(*num1 > *num2){
		tmp = *num2;
		*num2 = *num1;
		*num1 = tmp;
	}
	return;
}



