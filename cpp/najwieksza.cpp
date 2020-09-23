/*
 * najwieksza.cpp
 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a = 0 ; //deklaracja i inicjacja = definicja 
	int b = 0 ; 
	int c = 0 ;
	
	cout << "Podaj pierwszy bok: ";
	cin >> a;
	
	cout << "Podaj drugi bok: ";
	cin >> b;
	
	cout << "Podaj trzeci bok: ";
	cin >> c;
	
	if (a > b && a > c) cout < a;
	else if (b > c && b > c) cout < b;
	else 
		cout < c;
	
	return 0;
}

