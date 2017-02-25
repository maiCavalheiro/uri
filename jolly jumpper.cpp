#include <iostream>
#include <vector>
#include <cmath> 
#include <algorithm>

using namespace std;

int main(){
	int n;
	int sequence;
	int diference;
	bool flag;
	vector<int> numbers;
	vector<int> newSequence;

	while(cin >> n){
		numbers.clear();
		newSequence.clear();
		igual = 0;
		flag = false;

		for (int i = 0; i < n; ++i)
		{	
			cin >> sequence;
			numbers.push_back(sequence);
		}

			for (int i = 0; i < n-1; ++i)
			{
				diference = abs(numbers[i+1]-numbers[i]);
					newSequence.push_back(diference);
			}

			sort (newSequence.begin(), newSequence.end());

			int j = 1;
			for (int i = 0; i < n-1; ++i)
			 {	
			 	if(newSequence[i] != j){
			 		flag = true;
			 		break;}
			 		j++;
			 } 

			if(flag == false)
				cout <<"Jolly"<<endl;
			else
				cout <<"Not jolly"<<endl;
			}

	return 0;
}