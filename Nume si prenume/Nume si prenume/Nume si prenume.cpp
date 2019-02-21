// Nume si prenume.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char nume[80];
	cout<<"Introduceti numele si prenumele:";
	cin.getline(nume,80);
	cout<<"Numele tau este:"<<nume;
	cin.ignore();
	cin.get();
    return 0;
}
