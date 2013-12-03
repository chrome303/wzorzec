#include <iostream>
#include <string>
#include <conio.h>

/* Projekt WZORZEC kurwa! */

using namespace std;
int main(int argc, char** argv) {
	
    // MENU
	
	int menu;
	
	cout << "============================\n";
	cout << "========= M E N U ==========\n";
	cout << "============================\n";
	cout << "\n";
	cout << "Wybierz zadana opcje z menu wyboru" << endl;
	cout << "\n";
	cout << "1. Wskazanie wlasnego pliku do przeszukiwania" << endl;
	cout << "2. Podanie wzorca ciagu znaku do wyszukania" << endl;
	cout << "3. Zamkniecie programu" << endl;
	cin >> menu;
	
	switch ( menu)
    	{
    		case 3:
    			cout << "Koniec programu" << endl;
    			break;
    		case 1:
    			cout << "Wskaz plik" << endl;
    			break;
    		default:
    			cout << "Blad!!" << endl;
    			break;
    	}
   

	getch();
	return 0;
}
