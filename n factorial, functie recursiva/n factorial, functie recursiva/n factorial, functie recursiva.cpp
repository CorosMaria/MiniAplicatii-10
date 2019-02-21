// Se utilizeaza functii recursive
// Programul calculeaza factorialul unui numar
#include "stdafx.h"
#include < iostream >
#include < string >

using namespace std;
int fact(int n); // prototipul
int main(void)
{
	int nr, f;
	cout << "\n\n\tProgramul calculeaza factorialul unui numar";
	cout << "\n\n\tIntroduceri nr: ";
	cin >> nr;
	f=fact(nr);
	if (f!=0){
		cout << "\n\n\t" << nr << "!=" << f << "\n";
	}
	cin.ignore();
	cin.get();
	return 0;
}

int fact(int n)
{
	if (n<0){
		cout<<"\n\n\tArgument negativ!\n";
		return 0;
	}
	else if (n==0)	
		return 1;
	else
		return n*fact(n-1);
}