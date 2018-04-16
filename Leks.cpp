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
	string permutacja = perm.GetPerm();
	int iIndex = perm.GetLength();
	int iIndex2Change = 0;
	for (iIndex; iIndex > 0; iIndex--)
	{
		if (perm[iIndex - 1] > perm[iIndex])
		{
			break;
		}
	}
	if (iIndex == 0)
	{
		cout << "Brak poprzednika.\n";
	}
	else
	{
		iIndex2Change = iIndex;
		for (int i = iIndex; i <= perm.GetLength(); i++)
		{
			if (perm[i] < perm[iIndex - 1] && perm[i] > perm[iIndex2Change])
			{
				iIndex2Change = i;
			}
		}
		char znak;
		znak = permutacja[iIndex - 1];
		permutacja[iIndex - 1] = permutacja[iIndex2Change];
		permutacja[iIndex2Change] = znak;


		int iIndexEnd = perm.GetLength();
		while (iIndex <= iIndexEnd)
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
int Leks::factorial(int n)
{
	return (n <= 2) ? n : n * factorial(n - 1);
}
int Leks::Rank(Permutacja perm)
{
	int n = perm.GetLength();
	int rank = 1;

	for (int i = 0; i < n; i++)
	{
		// count all smaller characters than str[i] to the right of i
		int count = 0;
		for (int j = i + 1; j <= n; j++)
		{
			if (perm[i] > perm[j])
				count++;
		}
		// add current count to the rank
		rank += count * factorial(n - i);
	}
	cout << rank << endl;
	return rank;
}
int Leks::_mr_rank1(int n, int *vec, int *inv)
{
	int s, t;
	if (n < 2) return 0;

	s = vec[n - 1];
	t = vec[n - 1];
	vec[n - 1] = vec[inv[n - 1]];
	vec[inv[n - 1]] = t;

	t = inv[s];
	inv[s] = inv[n - 1];
	inv[n - 1] = t;
	
	return s + n * _mr_rank1(n - 1, vec, inv);
}

void Leks::Perm(int Rank, int n, vector<int>& Alphabet)
{
	int t, q, r;
	if (n < 1) return;
	else if (Rank == 0) return;
	q = Rank / n;
	r = Rank % n;
	t = Alphabet[r];
	Alphabet[r] = Alphabet[n - 1];
	Alphabet[n - 1] = t;
	Perm(q, n - 1, Alphabet);
}