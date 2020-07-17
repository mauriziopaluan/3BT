#include <iostream>
using namespace std;

bool Dividi(float num1, float num2, float* result);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	float a, b, risultato;

	cout << "Inserisci due numeri reali:" << endl;
	cin >> a >> b;
	if(Dividi(a,b,&risultato))
		cout << "Il risultato della divisione e': " << risultato << endl;
	else
		cout << "Divisione impossibile o indeterminata" << endl;
	
	getchar();
	return 0;
}


bool Dividi(float num1, float num2, float* result){
	if(num1 ==0 || num2 ==0)
		return false;
	*result = num1/num2;
	return true;
}


