#include <iostream>
#include <string>

using namespace std;

class Nazwisko {
private:
	const char* nazwisko;
public:
	void zmien_nazwisko(const char* nazwisko) {
		this->nazwisko = nazwisko;
	}
	
	const char* daj_nazwisko() {
		return nazwisko;
	}
	virtual void wyswietl_dane() {
		cout << daj_nazwisko()<< endl;
	}
	Nazwisko() {
		this->nazwisko = "eieoaufijasbfjk";
	}
	Nazwisko(const char* nazwisko) {
		zmien_nazwisko(nazwisko);
		cout << "konstruktor nazwisko: " << daj_nazwisko() << endl;
	}
	virtual ~Nazwisko() {
		cout << "desturktor_Nazwisko" << daj_nazwisko()  << endl;
	}
};
class Pelne : public Nazwisko {
private:
	const char* imie;
public:
	const char* daj_imie() {
		return imie;
	}
	void zmien_imie(const char* imie) {
		this->imie = imie;
	}
	void wyswietl_dane() {
		cout << daj_imie() << endl;
	}
	Pelne() {
		this->imie = "domyslne_IMIE";
	}
	Pelne(const char* imie, const char* nazwisko) : imie(imie), Nazwisko(nazwisko) {
		cout << "konstruktor imie: " << daj_imie() << endl;
	}
	~Pelne() {
		cout<< "destruktor imie" << daj_imie() <<  endl;
	}
};



int main()
{
	Nazwisko * tablica1 = new Pelne();
	Nazwisko * tablica2 = new Pelne("Pawel", "Wariat");
	delete tablica1;
	tablica2->wyswietl_dane();


	system("pause");
}