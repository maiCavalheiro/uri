#include <iostream>
#include <string>
#include <ctype.h>
#include <stdbool.h>

using namespace std;

int main()
{ 
  string str;
  int testes;
  bool imprimiu;

  cin >> testes;
  cin.get();
  
  for (int i = 0; i < testes; i++)
  {  
    imprimiu = false;
    getline(cin,str);

      for (int i = 0; i < str.size(); ++i)
      {
        if(!isspace(str[i])){

          if (imprimiu == false)
          {
            cout << str[i];
            imprimiu = true;
          }
        }
        else{
            imprimiu = false;     
        }
      }
     cout << endl;

  }

  return 0;

}