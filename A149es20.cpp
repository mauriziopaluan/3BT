#include <iostream>
using namespace std;

bool Rgb2CMY(int R, int G, int B, int* C, int* M, int* Y);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int rosso, verde, blu, celeste, magenta, giallo;

	cout << "Inserisci i tre valori RGB:" << endl;
	cin >> rosso >> verde >> blu;
	if(Rgb2CMY(rosso, verde, blu, &celeste, &magenta, &giallo))
		cout << "Il risultato della conversione e': celeste = " << celeste << " magenta = " << magenta << " giallo = " << giallo << endl;
	else
		cout << "Uno o piu' valori sono fuori range" << endl;
	
	getchar();
	return 0;
}


bool Rgb2CMY(int R, int G, int B, int* C, int* M, int* Y){
	if(R > 255 || G > 255 || B > 255 )
		return false;
	*C = 255-R;
	*M = 255-G;
	*Y = 255-B;
	return true;
}



