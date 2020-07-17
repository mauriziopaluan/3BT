#include <iostream>
using namespace std;

bool TrovaPrimo(int x);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int n;

	cout << "Fino a che numero vuoi vedere quanti numeri primi sono presenti?" << endl;
	cin >> n;
	for(int i = 1; i <=n; i++){
		cout << "Numero: " << i << " ";
		if (TrovaPrimo(i))
			cout << "Primo!";
		else
			cout << ""; 
		cout << endl;
		
	}
	
	getchar();
	return 0;
}


bool TrovaPrimo(int x){
	if(x == 1)
		return false;
	for(int y = 2; y <= x/2; y++){
		if(x%y == 0)
			return false;
		}
	return true;
}



