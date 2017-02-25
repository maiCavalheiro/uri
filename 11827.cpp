#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int gcd(int a, int b){
	while (b)
    {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}


int main(){
	int testes,max = 0;
	string nums;
	int v[100];

	cin >> testes;
	cin.get();

	while(testes--)
	{
		getline(cin,nums);
		stringstream ss(nums);
		
		int aux,i=0;
		while(ss >> aux){
			v[i++] = aux;
		}

		for (int j = 0; j < i; ++j)
		{
			for (int k = j+1; k < i; ++k)
			{
				int mdc = gcd(v[j],v[k]);
				if(max < mdc) max = mdc;
			}
		}

		cout << max << endl;
		max = 0;
	}

	return 0;
}