#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float altezza=0;
	int mesi=0;
	
	cout << "Inserire l'altezza iniziale della pianta e il numero dei mesi:" << endl;
	cin >> altezza >> mesi;
	for(int i = 1; i <= mesi; i++){
		//altezza = altezza*1.5;
		altezza = altezza + (altezza/2);
	}
	cout << "L'altezza della pianta dopo " << mesi << " mesi sara': " << altezza << endl;
	getchar();
	return 0;
}

