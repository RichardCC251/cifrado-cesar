#include<iostream>

using namespace std;

int main()
{
	char texto[100000], ch;
	int i, key;
	cout << "ingrese texto a desencriptar: ";
	cin.getline(texto, 100000);
	cout << "ingrese clave: ";
	cin >> key;
	for (i = 0; texto[i] != '\0'; ++i) {
		ch = texto[i];
		if (ch >= 'a' && ch = 'z') {
			ch = ch + key+1;
			if (ch > 'a') {
				ch = ch - 'z' + 'a' ;
			}
			texto[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			texto[i] = ch;
		}
	}
	cout << "mensaje desencriptado: " << texto;
	return 0;
}