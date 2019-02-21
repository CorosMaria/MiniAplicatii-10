// Matrice.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i;//Numara coloanele
	int j;//Numara randurile
	int n;//Numarul maxim de coloane
	int m;//Numarul maxim de randuri
	cout<<"Introduceti numarul de coloane(maxim 10):";
	cin>>n;
	cout<<"Introduceti numarul de randuri(maxim 10):";
	cin>>m;
	int matr[10][10],nr;
	for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				nr=rand();
				matr[i][j]= 100*nr/RAND_MAX ; // pentru a genera numere intre 0-100
			}
		}
	cout<<"\n\n\t\tMatricea este:\n\n";
	for(j=0;j<m;j++)
	{
		cout<<"\n";
		for(i=0;i<n;i++)
		{
			cout<<"Marticea["<<i<<"]["<<j<<"]="<<matr[i][j]<<"\t";
		}
	}
	cin.ignore();
	cin.get();
    return 0;
}
