#include "stdafx.h"
#include "Permutacja.h"

#pragma warning( disable : 4996)

Permutacja::Permutacja()
{
	m_perm = nullptr;
	iLength = 0;
}


Permutacja::~Permutacja()
{
}
char* Permutacja::GetPerm(int& n)
{
	n = iLength - 1;
	return m_perm;
}
void Permutacja::SetPerm( string perm )
{
	iLength = perm.length();
	m_perm = new char[iLength + 1];
	strcpy(m_perm, perm.c_str());
}