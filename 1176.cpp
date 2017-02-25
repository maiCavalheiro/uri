#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned long long int> vetor;
	int T, N;
	unsigned long long int a, b;

	cin >> T;

	vetor.push_back(0);
	vetor.push_back(1);

	for(int i = 0; i < 64; i++){
		a = vetor[i];
		b = vetor.back();
		vetor.push_back(a+b);	 
	}

	for (int i = 0; i < T; ++i)
	{
		cin >> N;
		cout <<"Fib("<<N<<") = "<< vetor[N] << endl;

	}
	return 0;
}
