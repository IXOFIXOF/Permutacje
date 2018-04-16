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
	int Rank(Permutacja perm);
	void Perm(int Rank, int n, vector<int>& Alphabet);
private:
	int factorial(int n);
	int _mr_rank1(int n, int *vec, int *inv);
};

