#pragma once
#include "stdafx.h"
class Permutacja
{
public:
	Permutacja();
	~Permutacja();
	void SetPerm( string perm );
	vector<int>& GetAlphabet();
	string GetPerm();
	int operator [](int n);
	int GetLength();
private:
	void SetAlphabet(Permutacja perm);
	string m_perm;
	vector<int> m_pAlphabet;
	int iLength;
};

