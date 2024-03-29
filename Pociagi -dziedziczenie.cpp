#include <iostream>
#include <string>

using namespace std;

class Pociag {
private:
	string nazwa_linii;
	string kolor;
	int liczba_wagonow;
public:
	string daj_nazwe_linii() {
		return nazwa_linii;
	}
	string daj_kolor() {
		return kolor;
	}
	int daj_liczbe_wagonow() {
		return liczba_wagonow;
	}

	Pociag(){}
	Pociag(string nazwa_linii, string kolor, int liczba_wagonow) {
		this->nazwa_linii = nazwa_linii;
		this->kolor = kolor;
		this->liczba_wagonow = liczba_wagonow;
			   
	}
	void wyswietl_informacje() {
		cout << "Liczba wagonow: " << daj_liczbe_wagonow() << ", nazwa linii: " << daj_nazwe_linii() << ", kolor: " << daj_kolor() << endl;
	}
};

class Pociag_osobowy : public Pociag{
private:
	int liczba_miejsc;
public:
	int daj_liczbe_miejsc() {
		return liczba_miejsc;
	}
	void wyswietl_informacje_osobowy() {
		wyswietl_informacje();
		cout << ", liczba miejsc: " << daj_liczbe_miejsc() << endl;
		}

	}

	Pociag_osobowy(){}
	Pociag_osobowy(string nazwa_linii, string kolor, int liczba_wagonow, int liczba_miejsc) : Pociag(nazwa_linii, kolor, liczba_wagonow) {
		this->liczba_miejsc = liczba_miejsc;
	}
};
class Pociag_towarowy : Pociag{
private:
	int ladownosc;
public:
	int daj_ladownosc() {
		return ladownosc;
	}
	void wyswietl_informacje_towarowy() {
		wyswietl_informacje();
		cout << ", ladownosc: " << daj_ladownosc() << endl;
	}
	Pociag_towarowy(){}
	Pociag_towarowy(string nazwa_linii, string kolor, int liczba_wagonow, int ladownosc) : Pociag(nazwa_linii, kolor, liczba_wagonow) {
		this->ladownosc = ladownosc;
	}

};
	


int main()
{
	int rozmiar_tablicy - 6;
	Pociag_osobowy * pociagi_osobowe = new Pociag_osobowy[rozmiar_tablicy];
	pociagi_osobowe[0] = Pociag_osobowy("linia1", "czerwony", 5200);
	pociagi_osobowe[1] = Pociag_osobowy("linia2", "bialy", 4000);
	pociagi_osobowe[2] = Pociag_osobowy("linia3", "bialy", 4000;
	pociagi_osobowe[3] = Pociag_osobowy("linia4", "bialy", 5000);
	pociagi_osobowe[4] = Pociag_osobowy("linia5", "zolty", 7000);
	pociagi_osobowe[5] = Pociag_osobowy("linia6", "bialy", 8000);
		Pociag_towarowy * pociagi towarowe = new Pociag_towarowy[rozmiar_tablicy];
	pociagi_towarowe[0] = Pociag_towarowy("linia towarowa1", "czarny", 10, 1000);
	pociagi_towarowe[1] = Pociag_towarowy("linia towarowa1", "czarny", 15, 4000);
	pociagi_towarowe[2] = Pociag_towarowy("linia towarowa1", "czarny", 10, 2000);
	pociagi_towarowe[3] = Pociag_towarowy("linia towarowa1", "czarny", 20, 10000);
	pociagi_towarowe[4] = Pociag_towarowy("linia towarowa1", "czarny", 10, 5000);
	pociagi_towarowe[5] = Pociag_towarowy("linia towarowa1", "czarny", 35, 2000);
	int liczba miejsc;
	cout << "Podaj szukana liczbe miejsc w pociagu osobowym: " << endl;
	cin >> liczba_miejsc;
	Pociag_osobowy * szukane_osobowe = zadana_liczba_miejsc(pociagi_osobowe, liczba_miejsc, rozmiar_tablicy);
	for (int i = 0; i < rozmiar_tablicy; i++) {
		if (szukane_osobowe[i].daj_kolor() != "")
			szukane_osobowe[i].wyswietl_informacje_osobowy();
	}
	int liczba miejsc;
	cout << "Podaj szukana liczbe miejsc w pociagu osobowym: " << endl;
	cin >> liczba_miejsc;
	Pociag_towarowy * szukane_towarowe = zadana_liczba_miejsc(pociagi_osobowe, ladownosc, rozmiar_tablicy);
	for (int i = 0; i < rozmiar_tablicy; i++) {
		if (szukane_towarowe[i].daj_kolor() != "")
			szukane_towarowe[i].wyswietl_informacje_towarowy();
    
}
