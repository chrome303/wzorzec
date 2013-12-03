#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
/* Projekt WZORZEC kurwa! */

using namespace std;
void wskazanie_pliku();         //deklaracje funkcji
void szukanie_frazy();
void wyjscie();
void autorzy();

int menu()           // funkcja menu zwracaj¹ca wartoœæ int

{

    cout << "[1] - Wprowadz nazwe pliku" << endl;      // wyœwietlenie menu
    cout << "[2] - Wyszukiwanie wzorca" << endl;
    cout << "[3] - Zamknij program" << endl;
    cout << "[4] - Autorzy" << endl;
    cout << "Wybierz opcje z menu";

    int pytanie;

    cin >> pytanie;  // pobranie wartoœci



    switch(pytanie)

    {

        case 1: wskazanie_pliku();       // przy wartoœci 1 wykonujemy funkcjê wskazanie_pliku()
                break;
        case 2: szukanie_frazy(); // gdy 2 to szukanie_frazy()
                break;
        case 3: wyjscie(); // gdy 3 to zakoñczenie()
                break;
        case 4: autorzy();     // gdy 4 to wyjœcie() z programu
                break;
    }
    return pytanie;            // zwraca wartoœæ do porownania.
}

// Tutaj beda sie wykonywac zdeklarowane funkcje

void wskazanie_pliku() 

{
    cout << endl << "Wskaz plik." << endl << endl;
    
    // Tu bedzie hardkor :)
}

void szukanie_frazy()

{
    cout << endl << "Wprowadz nazwe pliku." << endl << endl;
    
    // Tutaj tez :)
}

void wyjscie()

{
    cout <<  endl << "Spierdalamy:>" << endl << endl;
}

void autorzy()

{
    cout << endl <<  "Autorzy:)" << endl << endl;
}

int main(int argc, char *argv[])

{
    int wyjscie = 0;  // tworzymy zmienn¹ int która bêdzie siê równaæ 0

    do

    {
      wyjscie = menu();     // wywo³anie funkcji menu()
    }while (wyjscie != 4);  // Sprawdza co zwraca po wybraniu menu. Wypierdala sie jak podasz cokolwiek innego niz liczbe.
	                        // trzeba to ogarnac:> 

                            

    system("PAUSE");

    return EXIT_SUCCESS;

}
