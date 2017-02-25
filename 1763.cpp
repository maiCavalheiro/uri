#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string,string> idiomas;
	map<string,string>::iterator it;
	string busca;
	
	idiomas.insert ( pair<string,string>("brasil","Feliz Natal!") );
	idiomas.insert ( pair<string,string>("alemanha","Frohliche Weihnachten!") );
	idiomas.insert ( pair<string,string>("austria","Frohe Weihnacht!") );
	idiomas.insert ( pair<string,string>("coreia","Chuk Sung Tan!") );
	idiomas.insert ( pair<string,string>("espanha","Feliz Navidad!") );
	idiomas.insert ( pair<string,string>("grecia","Kala Christougena!") );
	idiomas.insert ( pair<string,string>("estados-unidos","Merry Christmas!") );
	idiomas.insert ( pair<string,string>("inglaterra","Merry Christmas!") );
	idiomas.insert ( pair<string,string>("australia","Merry Christmas!") );
	idiomas.insert ( pair<string,string>("portugal","Feliz Natal!") );
	idiomas.insert ( pair<string,string>("suecia","God Jul!") );
	idiomas.insert ( pair<string,string>("turquia","Mutlu Noeller") );
	idiomas.insert ( pair<string,string>("argentina","Feliz Navidad!") );
	idiomas.insert ( pair<string,string>("chile","Feliz Navidad!") );
	idiomas.insert ( pair<string,string>("mexico","Feliz Navidad!") );
	idiomas.insert ( pair<string,string>("antardida","Merry Christmas!") );
	idiomas.insert ( pair<string,string>("canada","Merry Christmas!") );
	idiomas.insert ( pair<string,string>("irlanda","Nollaig Shona Dhuit!") );
	idiomas.insert ( pair<string,string>("belgica","Zalig Kerstfeest!") );
	idiomas.insert ( pair<string,string>("italia","Buon Natale!") );
	idiomas.insert ( pair<string,string>("libia","Buon Natale!") );
	idiomas.insert ( pair<string,string>("siria","Milad Mubarak!") );
	idiomas.insert ( pair<string,string>("marrocos","Milad Mubarak!") );
	idiomas.insert ( pair<string,string>("japao","Merii Kurisumasu!") );

	while(cin >> busca){
		it = idiomas.find(busca);
		if( it != idiomas.end()){
			cout <<  idiomas.find(busca)->second << endl;
		}
		else{
			cout <<"--- NOT FOUND ---"<< endl;
		}
	}
		


	return 0;
}
