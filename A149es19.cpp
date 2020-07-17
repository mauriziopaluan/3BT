#include <iostream>
#include <math.h>
using namespace std;

double Calcola_Dist_2P(double x1, double y1, double x2, double y2);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double px1, py1, px2, py2, px3, py3, dist1, dist2, dist3, perimetro;

	cout << "Inserisci le coordinate cartesiane del primo punto:" << endl;
	cin >> px1 >> py1;
	cout << "Inserisci le coordinate cartesiane del secondo punto:" << endl;
	cin >> px2 >> py2;
	dist1 = Calcola_Dist_2P(px1,py1,px2,py2);
	cout << "Inserisci le coordinate cartesiane del terzo punto:" << endl;
	cin >> px3 >> py3;
	dist2 = Calcola_Dist_2P(px2,py2,px3,py3);
	dist3 = Calcola_Dist_2P(px3,py3,px1,py1);
	perimetro = dist1 + dist2 + dist3;
	cout << "Il perimetro del triangolo sul piano cartesiano e': " << perimetro << endl;
	getchar();
	return 0;
}


double Calcola_Dist_2P(double x1, double y1, double x2, double y2){
	double distanza;
	distanza = sqrt((pow(x2-x1,2)) + (pow(y2-y1,2)));
	return distanza;
}




