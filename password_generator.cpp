#include <iostream>
#include <locale>
#include <conio.h>
#include <string>
#include <random>

using namespace std;

string password_generator(int num){
	string chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/()='?¡¿+*~}]`{[^<>-_.:,;|°¬";
	string password;
	mt19937 rng(random_device{}());
	uniform_int_distribution<int> dist(0, chars.size() - 1);
	for (int i = 0; i < num; ++i) {
        password += chars[dist(rng)];
    }
    return password;
}

int main(){
	setlocale(LC_ALL, "spanish");
	
	char opc = 'Y';
    while (opc != 'N' && opc != 'n') {
        int num;
        cout << "Write the num of characters: ";
        cin >> num;
        string generated_password = password_generator(num);
        cout << "Your password is: " << generated_password << endl;
        cout << "Continue? Y/N ";
        cin >> opc;
	}
	
	cout << "Presiona una tecla para continuar..." << endl;
    _getch();
    
	return 0;
}
