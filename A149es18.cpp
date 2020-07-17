#include <iostream>
using namespace std;
#define PI_GRECO 3.14
#define G 9.8

float Calcola_L_Pendolo(float periodo);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	float a, risultato;

	cout << "Inserisci il periodo in secondi del pendolo:" << endl;
	cin >> a;
	risultato = Calcola_L_Pendolo(a);
	cout << "La lunghezza del pendolo in metri e': " << risultato << endl;
	getchar();
	return 0;
}


float Calcola_L_Pendolo(float periodo){
	float lunghezza;
	lunghezza = ((G*(periodo*periodo))/(4*(PI_GRECO*PI_GRECO)));
	return lunghezza;
}



