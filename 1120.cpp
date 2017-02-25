#include <iostream>
#include <string>

using namespace std;

int main()
{
	char N;
	string D;
	bool flag_zero = true;
	bool empty_flag = true;

	cin >> N;
	cin >> D;	

	while(N != '0' || D != "0"){
		flag_zero = true;
		empty_flag = true;

		for (int i = 0; i < D.size(); ++i)
		{
			if (D[i] == '0' && flag_zero == false ) 
			{	
				cout << D[i];
			}
			
			if(D[i] != '0' && D[i] != N){
				cout << D[i];
                empty_flag = false;
                flag_zero = false;
            }
			
		}

		if ( empty_flag == true && flag_zero == true ) 
			cout << "0";

        cout << endl;

		cin >> N;
		cin >> D;
}		
	return 0;
}
