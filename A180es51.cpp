#include <iostream>
#include <string>
using namespace std;

int TrovaSubStr(string str1, string str2);

int main(int argc, char** argv) {

	string s1,s2;
	int pos;

	cout << "Inserisci una stringa:" << endl;
	getline(cin, s1);
	cout << "Inserisci un'altra stringa:" << endl;
	getline(cin, s2);
	pos = TrovaSubStr(s1,s2);
	if( pos == -1)
		cout << "non ho trovato corrispondenze\n";
	else
		cout << "La seconda stringa e' stata trovata nella prima stringa a partire dalla posizione " << pos << endl;

	system("pause");
	return 0;
}

int TrovaSubStr(string str1, string str2){
	int i=0, val=-1;
	
	while(i < str1.length()){
		if(str2 == str1.substr(i, str2.length())){
			val = i+1;
			break;
		}
		i++;
	}
	
		return val;
}
