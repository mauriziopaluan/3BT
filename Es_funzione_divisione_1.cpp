#include <iostream>
using namespace std;

float Dividi(float num1, float num2);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	float a, b, risultato;

	cout << "Inserisci due numeri reali:" << endl;
	cin >> a >> b;
	risultato = Dividi(a,b);
	
	cout << "Il risultato della divisione e': " << risultato << endl;

	getchar();
	return 0;
}


float Dividi(float num1, float num2){
	
	return num1/num2;
}

