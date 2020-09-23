/*
 * trojkat.cpp
 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a; // deklaracja zmiennej
	int b;
	int c;
	a = 0;// inicjacja zmiennej
	b = 0;
	c = 0;
	cout << "Podaj pierwszy bok: ";
	cin >> a;
	cout << "Podaj drugi bok: ";
	cin >> b;
	cout << "Podaj trzeci bok: ";
	cin >> c;
	
	if(a + b > c)
		if(a+c>b)
			if(b+c>a)
			cout << "da się";
	else
		cout << "nie da sie";
		else
			cout <<"nie da sie";
			else
				cout << "nie da sie";
				
	
	return 0;
}

