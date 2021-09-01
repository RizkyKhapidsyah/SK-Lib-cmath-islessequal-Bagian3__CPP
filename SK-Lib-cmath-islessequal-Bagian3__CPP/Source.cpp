#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	bool hasil;
	float a = 80.23;
	int b = 82;

	hasil = islessequal(a, b);
	cout << a << " islessequal to " << b << ": " << hasil << endl;

	char x = 'c';

	hasil = islessequal(x, a);
	cout << x << " islessequal to " << a << ": " << hasil;

	_getch();
	return 0;
}
