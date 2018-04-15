#include "stdafx.h"
#include "Leks.h"


Leks::Leks()
{
}


Leks::~Leks()
{
}

void Leks::Nastepnik( Permutacja perm )
{
	string permutacja = perm.GetPerm();
	int iIndex = perm.GetLength();
	int iIndex2Change = 0;
	for (iIndex; iIndex > 0; iIndex--)
	{
		if (perm[iIndex - 1] < perm[iIndex])
		{
			break;
		}
	}
	if ( iIndex == 0 )
	{
		cout << "Brak nastepnika.\n";
	}
	else
	{
		iIndex2Change = iIndex;
		for (int i = iIndex; i <= perm.GetLength(); i++)
		{
			if (perm[i] > perm[iIndex - 1] && perm[i] < perm[iIndex2Change])
			{
				iIndex2Change = i;
			}
		}
		char znak;
		znak = permutacja[iIndex - 1];
		permutacja[iIndex - 1] = permutacja[iIndex2Change];
		permutacja[iIndex2Change] = znak;
		

		int iIndexEnd = perm.GetLength();
		while (iIndex <= iIndexEnd )
		{
			znak = permutacja[iIndex];
			permutacja[iIndex] = permutacja[iIndexEnd];
			permutacja[iIndexEnd] = znak;
			iIndex++;
			iIndexEnd--;
		}
		perm.SetPerm(permutacja);
		cout << permutacja << endl;
	}

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