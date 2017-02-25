#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double raio, A;

	cin >> raio;

	A = 3.14159 * (raio*raio);
	cout << fixed << setprecision(4);
	cout << "A=" << A << endl;

	return 0;
}
