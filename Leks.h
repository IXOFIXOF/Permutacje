#pragma once
#include "stdafx.h"
#include "Permutacja.h"
#include "Porzadek.h"


class Leks : public Porzadek
{
public:
	Leks();
	~Leks();
	void Nastepnik(Permutacja perm);
	void Poprzednik(Permutacja perm);
	void Rank(Permutacja perm);
	void Perm(int Rank, int n, int k);
};

