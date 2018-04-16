#pragma once
#include "stdafx.h"
#include "Permutacja.h"

class Porzadek
{
public:
	Porzadek();
	~Porzadek();
	unsigned int Newton(unsigned int n, unsigned int k);
	virtual void Nastepnik(Permutacja perm) = 0;
	virtual void Poprzednik(Permutacja perm) = 0;
	virtual int Rank(Permutacja perm) = 0;
	virtual void Perm(int Rank, int n, vector<int>& Alphabet) = 0;
};

