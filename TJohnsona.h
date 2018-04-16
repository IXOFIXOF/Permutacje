#pragma once
#include "stdafx.h"
#include "Porzadek.h"
#include "Permutacja.h"

class TJohnsona : public Porzadek
{
public:

	TJohnsona();
	~TJohnsona();
	void Nastepnik(Permutacja perm);
	void Poprzednik(Permutacja perm);
	int Rank(Permutacja perm);
	void Perm(int Rank, int n, vector<int>& Alphabet);
};

