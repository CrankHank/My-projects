#include<iostream>
#include<conio.h>

using namespace std;

float **utworz(int n, int m) {
	float **t = new float *[n];
	for (int i = 0; i < n; i++) {
		t[i] = new float[m];
	}
	return t;
}
void wpisz(float **t, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "t[" << i << "][" << j << "] = ";
			cin >> t[i][j];
		}
	}
}
void wypisz(float ** t, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
}
void usun(float **t, int n) {
	for (int i = 0; i < n; i++) {
		delete[] t[i];
	}

	delete[] t;
}
float **utworz2(int g, int h) {
	float **t2 = new float *[g];
	for (int i = 0; i < g; i++) {
		t2[i] = new float[h];
	}
	return t2;
}
void wpisz2(float **t2, int g, int h) {
	for (int i = 0; i < g; i++) {
		for (int o = 0; j < h; j++) {
			cout << "t2[" << i << "][" << j << "] = ";
			cin >> t2[i][j];
		}
	}
}
void wypisz2(float ** t2, int g, int h) {
	for (int i = 0; i < g; i++) {
		for (int j = 0; j < h; j++) {
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
}
void usun(float **t2, int g) {
	for (int i = 0; i < g; i++) {
		delete[] t2[i];
	}

	delete[] t2;
}
float **transponuj(float **t, int n, int m) {
	float **macierz_transponowana = utworz(m, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			macierz_transponowana[j][i] = t[i][j];
		}
	}

	return macierz_transponowana;
}
float **wymnoz_macierze(float **t1, int n1, int m1, float **t2, int n2, int m2) {
	if (m1 != n2) {
		cout << "Nie mozna wymnozyc macierzy" << endl;
		return t1;
	}

	float **t = utworz(m2, n1);
	float sum = 0;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m2; j++) {
			for (int k = 0; k < n2; k++) {
				sum += t1[i][k] * t2[k][i];
			}

			t[i][j] = sum;
			sum = 0;
		}
	}

	return t;
}
float **dodaj_macierze(float **t1, int n1, int m1, float **t2, int n2, int m2) {
	if (n1 != n2 || m1 != m2) {
		cout << "Nie mozna dodac macierzy" << endl;
		return t1;
	}

	float **t = utworz(n1, m1);

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			t[i][j] = t1[i][j] + t2[i][j];
		}
	}

	return t;
}
int main() {
	int n, m;
	cout << "liczba wierszy = ";
	cin >> n;

	cout << "liczba kolumn = ";
	cin >> m;

	float **macierz = utworz(n, m);
	wpisz(macierz, n, m);
	wypisz(macierz, n, m);
	
	int g, h;
	cout << "liczba wierszy drugiej macierzy = ";
	cin >> g;

	cout << "liczba kolumn drugiej macierzy = ";
	cin >> h;

	float **macierz = utworz(n, m);
	wpisz(macierz, g, h);
	wypisz(macierz, g, h);

	cout << "\n Macierz transponowana " << endl;

	float **macierz_transponowana = transponuj(macierz, n, m);
	wypisz(macierz_transponowana, m, n);

	cout << "\n Wymonozone macierze " << endl;

	float **wymnozone_macierze = wymnoz_macierze(macierz, n, m, macierz, g, h);
	wypisz(wymnozone_macierze, n, g);

	cout << "\n Dodane macierze " << endl;

	float **dodane_macierze = dodaj_macierze(macierz, n, m, macierz, n, m);
	wypisz(dodane_macierze, n, m);

	usun(macierz, n);

	_getch();
	return 0;
}