#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float n;

	cin >> n;

	if(0 >= n <= 25){

		cout << "Intervalo (0,25]" << endl;
	}

	if(25 >= n <= 50){

		cout << "Intervalo (25,50]" << endl;
	}

	if(50 >= n <= 75){

		cout << "Intervalo (50,75]" << endl;
	}

	if(75 >= n <= 100){

		cout << "Intervalo (75,100]" << endl;
	}


	return 0;
}
