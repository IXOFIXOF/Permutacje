#pragma once
#include "stdafx.h"
class Permutacja
{
public:
	Permutacja();
	~Permutacja();
	void SetPerm( string perm );
	string GetPerm();


private:
	string m_perm;
};

