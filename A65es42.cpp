#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double chicchi, caselle=0; 
	
	cout << "Inserire quante caselle della scacchiera si sono raggiunte (1-64 oppure 0 per terminare):" << endl;
	do{
	cin >> caselle;
	if(caselle == 0)
		chicchi=0;
	else
		chicchi = pow(2,caselle-1);
	cout << "I chicchi di riso sono: " << chicchi << endl;
	}while(caselle !=0);
	return 0;
}
