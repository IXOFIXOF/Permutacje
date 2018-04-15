#pragma once
#include "stdafx.h"
class Permutacja
{
public:
	Permutacja();
	~Permutacja();
	void SetPerm( string perm );
	void SetAlphabet(const string& perm);
	string GetPerm();
	char operator [](int n);
	int GetLength();
private:
	string m_perm;
	int* m_pAlphabet;
	int iLength;
};

