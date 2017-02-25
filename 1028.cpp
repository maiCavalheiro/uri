#include <iostream>

using namespace std;

int main()
{
	int x,y,N,aux,resto;

	cin >> N;

	for(int i=0;i<N;++i){
		cin >> x;
		cin >> y;
		resto = 1;

		if (x < y) {
            aux = x;
            x = y;
            y = aux;
        }

            while (resto != 0) {
                resto = x % y;
                x = y;
                y = resto;
            }
         
         cout << x << endl;
	}

	return 0;
}
