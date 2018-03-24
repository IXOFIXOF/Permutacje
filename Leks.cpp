#include "stdafx.h"
#include "Leks.h"


Leks::Leks()
{
}


Leks::~Leks()
{
}

void Leks::Nastepnik(Permutacja perm)
{
	
	int iKoniec = 0;
    char* pPerm = perm.GetPerm(iKoniec);
	for (iKoniec; iKoniec >= 0; iKoniec--)
	{
		char cuPerm = pPerm[iKoniec];
		char prPerm = pPerm[iKoniec - 1];
		int iCurrent = atoi(&cuPerm) + 1;
		int iPrevious = atoi(&prPerm);
		if ( iPrevious > iCurrent   )
		{
			pPerm[iKoniec] += 1;
			cout << pPerm << endl;
			return;
		}
	}
	cout << "Brak nastepnika.\n";
}
void Leks::Poprzednik(Permutacja perm)
{

}
void Leks::Rank(Permutacja perm)
{

}
void Leks::Perm(int Rank, int n, int k)
{

}