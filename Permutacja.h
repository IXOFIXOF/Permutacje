#pragma once
#include "stdafx.h"
class Permutacja
{
public:
	Permutacja();
	~Permutacja();
	void SetPerm( string perm );
	char* GetPerm(int& n);


private:
	char* m_perm;
	int iLength;
};

