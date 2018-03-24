#pragma once
#include "stdafx.h"
#include "Permutacja.h"


class Porzadek
{
public:
	Porzadek();
	~Porzadek();
	virtual void Nastepnik(Permutacja perm) = 0;
	virtual void Poprzednik(Permutacja perm) = 0;
	virtual void Rank(Permutacja perm) = 0;
	virtual void Perm(int Rank, int n, int k) = 0;
};

