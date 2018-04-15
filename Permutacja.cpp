#include "stdafx.h"
#include "Permutacja.h"

#pragma warning( disable : 4996)

Permutacja::Permutacja()
{
	iLength = 0;
}


Permutacja::~Permutacja()
{
}
char Permutacja::operator [](int n)
{
	return m_perm[n];
}
int Permutacja::GetLength()
{
	return iLength;
}
void Permutacja::SetAlphabet( const string& perm )
{
	m_pAlphabet = new int[perm.length() - 1];
	for (int iCounter = 0; iCounter < perm.length(); iCounter++)
	{
		m_pAlphabet[iCounter] = perm[iCounter];
	}
	sort(m_pAlphabet, m_pAlphabet + perm.length());
}
string Permutacja::GetPerm()
{
	return m_perm;
}
void Permutacja::SetPerm( string perm )
{
	SetAlphabet( perm );
	iLength = perm.length() - 1;
	m_perm = perm;
}