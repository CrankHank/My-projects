#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int>> dajMacierz(int wiersze, int kolumna)
{
	vector<vector<int>> macierz;
	for (int i = 0; i < wiersze; i++)
	{
		vector<int> wiersz;
		for (int j = 0; j < kolumna; j++)
		{
			int numer;
			cin >> numer;
			wiersz.push_back(numer);
		}
		macierz.push_back(wiersz);
	}
	return macierz;
}
vector<vector<int>> Transponowanie(vector<vector<int>> macierz, int wiersze, int kolumna)
{
	vector<vector<int>> macierzTransponowana;
	for (int i = 0; i < kolumna; i++)
	{
		vector<int> wiersz;
		for (int j = 0; j < wiersze; j++)
		{
			wiersz.push_back(macierz[j][i]);
		}
		macierzTransponowana.push_back(wiersz);
	}
	return macierzTransponowana;
}
vector<vector<int>> Mnozenie(vector<vector<int>> A, vector<vector<int>> B, int wiersze, int kolumna)
{
	vector<vector<int>> C;


	for (int i = 0; i < kolumna; i++)
	{
		vector<int> wiersz;

		for (int j = 0; j < kolumna; j++)
		{
			int sum = 0;
			for (int k = 0; k < wiersze; k++)
			{
				sum += A[i][k] * B[k][j];

			}
			wiersz.push_back(sum);
		}
		C.push_back(wiersz);
	}
	return C;
}
void wyswietlwynik(vector<vector<int>> macierz, int wiersz, int kolumna)
{
	for (int i = 0; i < wiersz; i++)
	{
		for (int j = 0; j < kolumna; j++)
		{
			cout << macierz[i][j] << " ";
			if (j == kolumna - 1)
			{
				cout << "\n";
			}
		}
	}
}

int main()
{

	int m;
	int n;
	cin >> m;
	cin >> n;
	vector<vector<int>> A = dajMacierz(m, n);
	vector<vector<int>> B = Transponowanie(A, m, n);
	vector<vector<int>> C = Mnozenie(B, A, m, n);
	wyswietlwynik(C, n, n);

	return 0;
}