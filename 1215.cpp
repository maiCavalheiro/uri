#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

int main()
{
	string txt;
	vector<char> v;

	while(getline(cin, txt)){
		
		for (int i = 0; i < txt.size(); ++i)
		{
			if(txt[i] != ' '){
				v.push_back(txt[i]);
			}
		}

		for (int i = 0; i < txt.size(); ++i)
		{
			
			cout << v[i];

		}
	}
	

	return 0;
}
