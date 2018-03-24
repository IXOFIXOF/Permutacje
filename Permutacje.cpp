// Permutacje.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Perm.h"

void GetPerm(Permutacja& p);
void Operacje(Porzadek* p);
int Wybor();
int main()
{
	cout << "1. Leksykograficzny\n";
	cout << "2. T.Johnsona\n";
	cout << "Wybierz porzadek: ";
	unsigned wybor = 0;
	while (wybor <= 2)
	{
		cin >> wybor;
		Porzadek * p = nullptr;
		switch (wybor)
		{
		case 1:
		{
			p = new Leks();
			Operacje(p);
			break;
		}
		case 2:
		{
			p = new TJohnsona();
			Operacje(p);
			break;
		}
		default:
			break;
		}
	}

	cin.ignore();
	cin.get();
	return 0;
}
void Operacje(Porzadek* p)
{
	Permutacja oPerm;
	int n = 0, k = 0, x = 0, rank = 0;
	switch (Wybor())
	{
	case 1:
	{
		GetPerm(oPerm);
		p->Nastepnik(oPerm);
		break;
	}
	case 2:
	{
		p->Poprzednik(oPerm);
		break;
	}
	case 3:
	{
		p->Rank(oPerm);
		break;
	}
	case 4:
	{
		p->Perm(rank, n, k);
		break;
	}
	default:
		break;
	}
}
int Wybor()
{
	int n = 0;
	cout << "1. Nastepnik\n";
	cout << "2. Poprzednik\n";
	cout << "3. Rank\n";
	cout << "4. Permutacja\n";
	cin >> n;
	return n;
}
void GetPerm(Permutacja& perm)
{
	cout << "Podaj permutacje: ";
	string s;
	cin >> s;
	perm.SetPerm(s);
}
