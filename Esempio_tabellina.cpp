#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n=0;
	
	cout << "Inserire un numero da 1 a 9:" << endl;
	cin >> n;
	if(n>0 && n <=9){
		cout << "|" << setfill('-') << setw(7) << "|" << setfill('-') << setw(7) <<  "|" << endl;
		for(int i = 1; i <=9; i++){
			cout << "|" << n << " X " << i << setfill(' ') <<setw(2) << "|" << setw(2) << n*i << setw(5)  << "|" << endl;
			cout << "|" << setfill('-') << setw(7) << "|" << setfill('-') << setw(7) <<  "|" << endl;
		}
	}
	else
		cout << "Numero inserito non valido!" << endl;
	getchar();
	return 0;
}


