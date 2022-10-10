#include <iostream>

using namespace std;

int a, b, akcja;

int main()
{
	cout << "Wpisz liczbe a:" << endl;
	cin >> a;
	cout << "Wpisz liczbe b:" << endl;
	cin >> b;

	cout << "Co chcesz zrobic?" << endl;

	cout << "dodac - 1" << endl;
	cout << "odjac - 2" << endl;
	cout << "pomnozyc - 3" << endl;
	cout << "podzielic - 4" << endl;
	cin >> akcja;

	if (akcja == 1)
	{
		cout << a + b;
	}
	else if (akcja == 2)
	{
		cout << a - b;
	}
	else if (akcja == 3)
	{
		cout << a * b;
	}
	else if (akcja == 4)
	{
		cout << a / b;
	}
	else cout << "nie ma takiej opcji" << endl;



		return 0;
}