/*
 * bmi.cpp

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float waga;
	float wzrost;
	float bmi;
	
	waga = 0;
	wzrost = 0;
	bmi = 0;
	
	cout << "Podaj swoją wagę (w kilogramach): ";
	cin >> waga;
	cout << "Podaj swój wzrost (w metrach): ";
	cin >> wzrost;
	
	bmi = waga/(wzrost*wzrost);
	
	cout<<bmi;
	
	
	if (bmi < 18.5)
		cout << "Masz niedowagę";
	else if (bmi >= 18.5 && bmi < 25)
		cout << "Waga w normie";
	else if (bmi >= 25 and bmi < 29.9)
		cout <<"Nadwaga";
	else if (bmi >= 30 and bmi < 50)
		cout <<"Otyłość";
	
	
	return 0;
}

