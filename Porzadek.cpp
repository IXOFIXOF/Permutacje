#include "stdafx.h"
#include "Porzadek.h"


Porzadek::Porzadek()
{
}


Porzadek::~Porzadek()
{
}
unsigned int Porzadek::Newton(unsigned int n, unsigned int k)      
{
	unsigned int Wynik = 1;       

	for (unsigned int i = 1; i <= k; i++)   
	{
		Wynik = Wynik * (n - i + 1) / i;      
	}

	return Wynik;      
}