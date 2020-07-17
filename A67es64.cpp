#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float llungo=118.8, lcorto=84, tmp=0; 
	int n=0;
	
	cout << "Inserire il formato della A(n) dove n va da 0 a 5 per visualizzarne le dimensioni:" << endl;

	cin >> n;
	if(n>=0 && n<=5){
		for(int i = 0 ; i < n; i++){
			if(llungo>lcorto){
				tmp=lcorto;
				lcorto=llungo/2;
				llungo=tmp;
			}
			else{
				tmp=llungo;
				llungo=lcorto/2;
				lcorto=tmp;
			}
		}
		cout << "Il lato corto della pagina A" << n << " e' " << lcorto << " cm ed il lato lungo e' " << llungo << " cm." << endl;
	}else
		cout << "Inserire un numero valido! Da 0 a 5" << endl;
		
	getchar();
	return 0;
}

