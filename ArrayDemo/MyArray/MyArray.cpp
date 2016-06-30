// MyArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int m_aPrime[5];  // hold the first 5 elements
	m_aPrime[0] = 2;
	m_aPrime[1] = 3;
	m_aPrime[2] = 5;
	m_aPrime[3] = 7;
	m_aPrime[4] = 11;
	
	cout << "The lowest prime number is: " << m_aPrime[0] << std::endl;
	int total = 0;
	for(int i = 0; i < 5; ++i)
	{
		total += m_aPrime[i];
	}
	cout << "The Sum of the first 5 primes is: " << total << std::endl;

	return 0;
}

