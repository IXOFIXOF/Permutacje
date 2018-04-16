#include "stdafx.h"
#include "Permutacja.h"

#pragma warning( disable : 4996)

Permutacja::Permutacja()
{
	iLength = 0;
	m_pAlphabet.clear();
}


Permutacja::~Permutacja()
{
}
int Permutacja::operator [](int n)
{
	string perm = m_perm;
	reverse(perm.begin(), perm.end());
	int a = atoi(perm.data());
	int dzielnik = 10;
	for (int i = 0; i < n; i++)
	{
		a = a / dzielnik;
	}
	a = a % dzielnik;
	return a;
}
int Permutacja::GetLength()
{
	return iLength;
}
vector<int>& Permutacja::GetAlphabet()
{
	return m_pAlphabet;
}
void Permutacja::SetAlphabet( Permutacja perm )
{
	for (int iCounter = 0; iCounter <= perm.GetLength(); iCounter++)
	{
		m_pAlphabet.push_back(perm[iCounter]);
	}
	sort(m_pAlphabet.begin(), m_pAlphabet.end());
	
}
string Permutacja::GetPerm()
{
	return m_perm;
}
void Permutacja::SetPerm( string perm )
{
	iLength = perm.length() - 1;
	m_perm = perm;
	SetAlphabet(*this);
}