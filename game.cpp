#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <unistd.h>
using namespace std;


string nick, wybor, bulki, kebab, paczek;
int hajs, winy, losey, decyzja, remis, zakup;

int main() {
	hajs = 0;
	winy = 0;
	losey = 0;
	cout << "Witaj w WarSimulator" << endl;
	cout << "Podaj nick: ";
	cin >> nick;
	cout << "A wiec " << nick << " mozesz korzystac z komend /walka/ /bilans/ /sklep/ /koniec/ " << endl;
	while (1 != 2) {
	cout << "------------------------------------------------" << endl;
	cout << "A wiec co robisz?: ";
	cin >> wybor;
	if (wybor=="koniec") {
		cout << "------------------------------------------------" << endl;
		cout << "Do widzenia!" << endl;
		return 0;
	}
	if (wybor=="bilans") {
		system("cls");
		cout << "------------------------------------------------" << endl;
		cout << "Majatek: " << hajs << " cesarskiego zlota" << endl;
		cout << "Wygrane: " << winy << endl;
		cout << "Przegrane: " << losey << endl;
		cout << "Remisy: " << remis << endl;
		cout << "Itemki: " << bulki << paczek << kebab << endl;
		cout << "------------------------------------------------" << endl;	
	}
	if (wybor=="sklep") {
		system("cls");
		cout << "------------------------------------------------" << endl;
		cout << "Witaj w rzezn.... piekarni Pawe³ek znaczy sie" << endl;
		cout << "Oto, co moge ci sprzedac: " << endl;
		cout << "1.Dwa bulka - 200 cesarskiego zlota" << endl;
		cout << "2.Paczek bez raczek - 500 cesarskiego zlota" << endl;
		cout << "3.Kebab robiacy wrazenie - 1000 cesarskiego zlota" << endl;
		cout << "Co kupujesz? Podaj numer: ";
		cin >> zakup;
		if (zakup=1 && hajs>=200) {
			bulki = "Dwa bulka";
			cout << "Przedmiot zakupiony!" << endl;
		}
			if (zakup=2 && hajs>=500) {
			paczek = "Paczek bez raczek";
			cout << "Przedmiot zakupiony!" << endl;
		}
			if (zakup=3 && hajs>=1000) {
			kebab = "Kebab robiacy wrazenie";
			cout << "Przedmiot zakupiony!" << endl;
		}
			else {
				cout << "Albo ty nie masz kasy, albo ja itemka" << endl;
			} 
		cout << "------------------------------------------------" << endl;	
	}
	if (wybor=="walka") {
		system("cls");
		cout << "------------------------------------------------" << endl;
		cout << "Wojna sie rozpoczela" << endl;
		cout << "0 to przegrana, 1 to wygrana, 2 to remis, powodzenia w losowaniu" << endl;
		cout << "" << endl;
		sleep(1);
		cout << "Wynik: ";
		srand(time(0));
		decyzja = rand() % 3;
		cout << decyzja << endl;
		if (decyzja==0) {
			cout << "Niestety przegrales" << endl;
			losey++;
		}
			if (decyzja==1) {
			cout << "Zwyciestwo!!!" << endl;
			winy++;
			hajs = hajs + 100;
		}
			if (decyzja==2) {
			cout << "Remis, niby dobrze niby zle, nic nie tracisz nic nie zyskujesz" << endl;
			remis++;
		}
		cout << "------------------------------------------------" << endl;
	}
}
}
