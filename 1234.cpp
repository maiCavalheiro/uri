#include <iostream>
#include <string>
#include <ctype.h>
#include <stdbool.h>

using namespace std;

int main()
{
	string sentence;
	bool ultimo = true;


	while(getline(cin, sentence)){
		ultimo = true;

		for(int i=0; i < sentence.size();i++){
			
			if(sentence[i] != ' '){

				if(ultimo ==  true){
					sentence[i] = toupper(sentence[i]);
					ultimo = !ultimo; }

					else{ sentence[i] = tolower(sentence[i]);
					ultimo = !ultimo;}

				}	
			
		}

		cout << sentence << endl;
	}

	return 0;
}
